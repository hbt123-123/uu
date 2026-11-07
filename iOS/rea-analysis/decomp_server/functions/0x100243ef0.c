// rea decompile_all
// name: FUN_100243ef0
// address: 0x100243ef0
// body: available
// range: 0x100243ef0-0x1002441bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100243ef0(byte param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  void *aBlock;
  void *pvVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  lVar10 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a7e450;
  FUN_100004bb4(&DAT_100a7e450,&DAT_100813ef0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar10 - extraout_x8_01;
  DAT_100b363e9 = param_1;
  if ((param_1 & 1) != 0) {
    local_b0 = param_4;
    _swift_beginAccess(&DAT_100a7fa48,auStack_78,1,0);
    DAT_100a7fa48 = param_2 & 1;
    if (DAT_100a7de30 != -1) {
      _swift_once(&DAT_100a7de30,FUN_100247fc8);
    }
    FUN_10021bec0(puVar3,&DAT_100b363b0);
    __s10Foundation4DateVACycfC(lVar8);
    lVar4 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar8,0,1,lVar4);
    _swift_beginAccess(puVar3,&local_a8,0x21,0);
    FUN_1002381f8(lVar8,puVar3);
    _swift_endAccess(&local_a8);
    if ((DAT_100a7fa48 & 1) == 0) {
      FUN_10021e878(0);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      local_88 = thunk_FUN_10024507c;
      uStack_80 = 0;
      local_a8 = PTR___NSConcreteStackBlock_100995490;
      local_a0 = 0x42000000;
      local_98 = FUN_1000acdb4;
      puStack_90 = &DAT_1009a7cf8;
      aBlock = __Block_copy(&local_a8);
      pvVar5 = aBlock;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar10);
      local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_10021e8d8();
      puVar3 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar6 = puVar3;
      FUN_10021e91c();
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar9,&local_a8,puVar3,puVar6,lVar1,pvVar5);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar10,lVar9,aBlock);
      __Block_release(aBlock);
      (**(code **)(lVar11 + 8))(lVar9,lVar1);
      (**(code **)(lVar7 + 8))(lVar10,lVar2);
    }
  }
  __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF();
  return;
}

