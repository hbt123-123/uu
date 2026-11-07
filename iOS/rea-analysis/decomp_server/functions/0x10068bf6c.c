// rea decompile_all
// name: FUN_10068bf6c
// address: 0x10068bf6c
// body: available
// range: 0x10068bf6c-0x10068c637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10068bf6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  undefined1 local_a8;
  undefined1 uStack_a7;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined *puStack_a0;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar2);
  __ss7EncoderP20singleValueContainers06Singlec8EncodingD0_pyFTj(auStack_78,uVar2,uVar1);
  thunk_FUN_100686184(auStack_98);
  uVar2 = 0;
  FUN_10004003c(0,&DAT_100ab9e80,&PTR__OBJC_CLASS___NSNull_100a659f8);
  puVar5 = PTR___sypN_100995e88;
  puVar3 = &local_a8;
  _swift_dynamicCast(puVar3,auStack_98,PTR___sypN_100995e88 + 8,uVar2,6);
  if ((int)puVar3 != 0) {
    FUN_1000ce034(auStack_78,local_60);
    __ss28SingleValueEncodingContainerP9encodeNilyyKFTj(local_60,uStack_58);
    goto LAB_10068c610;
  }
  thunk_FUN_100686184(auStack_98);
  puVar3 = &local_a8;
  _swift_dynamicCast(puVar3,auStack_98,puVar5 + 8,PTR___sSiN_100995968,0);
  if ((int)puVar3 == 0) {
    puVar3 = &local_a8;
    _swift_dynamicCast(puVar3,auStack_98,puVar5 + 8,PTR___ss4Int8VN_100995c20,0);
    if ((int)puVar3 == 0) {
      puVar3 = &local_a8;
      _swift_dynamicCast(puVar3,auStack_98,puVar5 + 8,PTR___ss5Int32VN_100995c78,0);
      if ((int)puVar3 == 0) {
        puVar3 = &local_a8;
        _swift_dynamicCast(puVar3,auStack_98,puVar5 + 8,PTR___ss5Int64VN_100995cc0,0);
        if ((int)puVar3 == 0) {
          puVar3 = &local_a8;
          _swift_dynamicCast(puVar3,auStack_98,puVar5 + 8,PTR___sSuN_100995a50,0);
          if ((int)puVar3 == 0) {
            puVar3 = &local_a8;
            _swift_dynamicCast(puVar3,auStack_98,puVar5 + 8,PTR___ss5UInt8VN_100995d40,0);
            if ((int)puVar3 == 0) {
              puVar3 = &local_a8;
              _swift_dynamicCast(puVar3,auStack_98,puVar5 + 8,PTR___ss6UInt16VN_100995d90,0);
              if ((int)puVar3 == 0) {
                puVar3 = &local_a8;
                _swift_dynamicCast(puVar3,auStack_98,puVar5 + 8,PTR___ss6UInt32VN_100995dc0,0);
                if ((int)puVar3 == 0) {
                  puVar3 = &local_a8;
                  _swift_dynamicCast(puVar3,auStack_98,puVar5 + 8,PTR___ss6UInt64VN_100995e10,0);
                  if ((int)puVar3 == 0) {
                    puVar3 = &local_a8;
                    _swift_dynamicCast(puVar3,auStack_98,puVar5 + 8,PTR___sSdN_1009958f0,0);
                    if ((int)puVar3 == 0) {
                      puVar3 = &local_a8;
                      _swift_dynamicCast(puVar3,auStack_98,puVar5 + 8,PTR___sSbN_1009958c8,0);
                      if ((int)puVar3 == 0) {
                        puVar3 = &local_a8;
                        _swift_dynamicCast(puVar3,auStack_98,puVar5 + 8,PTR___sSSN_1009957f8,0);
                        if ((int)puVar3 == 0) {
                          puVar4 = &DAT_100ab9e98;
                          FUN_100004bb4(&DAT_100ab9e98,&DAT_10084d520);
                          puVar3 = &local_a8;
                          _swift_dynamicCast(puVar3,auStack_98,puVar5 + 8,puVar4,0);
                          if ((int)puVar3 == 0) {
                            puVar4 = &DAT_100ab9ea0;
                            FUN_100004bb4(&DAT_100ab9ea0,&DAT_10084d528);
                            puVar3 = &local_a8;
                            _swift_dynamicCast(puVar3,auStack_98,puVar5 + 8,puVar4,0);
                            if ((int)puVar3 == 0) goto LAB_10068c608;
                            _swift_bridgeObjectRelease
                                      (CONCAT44(uStack_a4,
                                                CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8))));
                            if (*(char *)(unaff_x20 + 0x31) == '\x04') {
                              lVar7 = *(long *)(unaff_x20 + 8);
                              puVar5 = *(undefined **)(lVar7 + 0x10);
                              __sSD15minimumCapacitySDyxq_GSi_tcfC
                                        (puVar5,PTR___sSSN_1009957f8,&DAT_1009e6360,
                                         PTR___sSSSHsWP_100995808);
                              local_48 = puVar5;
                              FUN_1006826a0(lVar7,&local_48);
                              puVar5 = local_48;
                            }
                            else {
                              puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
                              FUN_10068e120();
                            }
                            local_48 = puVar5;
                            FUN_1000ce034(auStack_78,local_60);
                            puVar4 = &DAT_100ab9ef8;
                            FUN_100004bb4(&DAT_100ab9ef8,&DAT_10084d568);
                            puVar6 = &DAT_100ab9f00;
                            FUN_100690ee8(&DAT_100ab9f00,FUN_1006904a8,PTR___sSSSEsWP_100995800,
                                          PTR___sSDyxq_GSEsSERzSER_rlMc_100995780);
                          }
                          else {
                            puVar4 = (undefined *)
                                     CONCAT44(uStack_a4,
                                              CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8)));
                            _swift_bridgeObjectRelease();
                            FUN_100686eb4();
                            puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
                            if (puVar4 != (undefined *)0x0) {
                              puVar5 = puVar4;
                            }
                            local_48 = puVar5;
                            FUN_1000ce034(auStack_78,local_60);
                            puVar4 = &DAT_100ab9f10;
                            FUN_100004bb4(&DAT_100ab9f10,&DAT_10084d570);
                            puVar6 = &DAT_100ab9f18;
                            FUN_100690fa4(&DAT_100ab9f18,FUN_1006904a8,
                                          PTR___sSayxGSEsSERzlMc_100995880);
                          }
                          __ss28SingleValueEncodingContainerP6encodeyyqd__KSERd__lFTj
                                    (&local_48,puVar4,puVar6,local_60,uStack_58);
                        }
                        else {
                          FUN_1000ce034(auStack_78,local_60);
                          __ss28SingleValueEncodingContainerP6encodeyySSKFTj
                                    (CONCAT44(uStack_a4,
                                              CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8))),
                                     puStack_a0,local_60,uStack_58);
                          puVar5 = puStack_a0;
                        }
                        _swift_bridgeObjectRelease(puVar5);
                      }
                      else {
                        FUN_1000ce034(auStack_78,local_60);
                        __ss28SingleValueEncodingContainerP6encodeyySbKFTj
                                  (local_a8,local_60,uStack_58);
                      }
                    }
                    else {
                      FUN_1000ce034(auStack_78,local_60);
                      __ss28SingleValueEncodingContainerP6encodeyySdKFTj
                                (CONCAT44(uStack_a4,CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8))
                                         ),local_60,uStack_58);
                    }
                  }
                  else {
                    FUN_1000ce034(auStack_78,local_60);
                    __ss28SingleValueEncodingContainerP6encodeyys6UInt64VKFTj
                              (CONCAT44(uStack_a4,CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8))),
                               local_60,uStack_58);
                  }
                }
                else {
                  FUN_1000ce034(auStack_78,local_60);
                  __ss28SingleValueEncodingContainerP6encodeyys6UInt32VKFTj
                            (CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8)),local_60,uStack_58);
                }
              }
              else {
                FUN_1000ce034(auStack_78,local_60);
                __ss28SingleValueEncodingContainerP6encodeyys6UInt16VKFTj
                          (CONCAT11(uStack_a7,local_a8),local_60,uStack_58);
              }
            }
            else {
              FUN_1000ce034(auStack_78,local_60);
              __ss28SingleValueEncodingContainerP6encodeyys5UInt8VKFTj(local_a8,local_60,uStack_58);
            }
          }
          else {
            FUN_1000ce034(auStack_78,local_60);
            __ss28SingleValueEncodingContainerP6encodeyySuKFTj
                      (CONCAT44(uStack_a4,CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8))),local_60
                       ,uStack_58);
          }
        }
        else {
          FUN_1000ce034(auStack_78,local_60);
          __ss28SingleValueEncodingContainerP6encodeyys5Int64VKFTj
                    (CONCAT44(uStack_a4,CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8))),local_60,
                     uStack_58);
        }
      }
      else {
        FUN_1000ce034(auStack_78,local_60);
        __ss28SingleValueEncodingContainerP6encodeyys5Int32VKFTj
                  (CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8)),local_60,uStack_58);
      }
    }
    else {
      FUN_1000ce034(auStack_78,local_60);
      __ss28SingleValueEncodingContainerP6encodeyys4Int8VKFTj(local_a8,local_60,uStack_58);
    }
  }
  else {
    FUN_1000ce034(auStack_78,local_60);
    __ss28SingleValueEncodingContainerP6encodeyySiKFTj
              (CONCAT44(uStack_a4,CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8))),local_60,
               uStack_58);
  }
LAB_10068c608:
  FUN_10003f094(auStack_98);
LAB_10068c610:
  FUN_10003f094(auStack_78);
  return;
}

