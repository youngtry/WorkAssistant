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
        
        let button:UIButton = UIButton(type: .ContactAdd);
        button.frame = CGRectMake(10, 10, 100, 100);
        button.setTitle("button", forState: UIControlState.Normal);
        self.view.addSubview(button);
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning();
    }
}
