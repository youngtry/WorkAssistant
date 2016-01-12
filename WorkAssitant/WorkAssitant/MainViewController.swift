//
//  MainViewController.swift
//  WorkAssitant
//
//  Created by  TianRunyan on 15/12/29.
//  Copyright © 2015年  TianRunyan. All rights reserved.
//

import UIKit

class MainViewController: UIViewController {
    override func viewDidLoad() {
        super.viewDidLoad();
        
        let isFirstIn = NSUserDefaults.standardUserDefaults().stringForKey("FIRSTIN");
        if(isFirstIn != nil){
            NSUserDefaults.standardUserDefaults().setBool(false, forKey: "FIRSTIN");
        }else{
            NSUserDefaults.standardUserDefaults().setBool(true, forKey: "FIRSTIN");
        }
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning();
    }
    
    func setupUserHabit(){
        
    }
}
