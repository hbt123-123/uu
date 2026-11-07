// rea decompile_all
// name: FUN_1001aa2dc
// address: 0x1001aa2dc
// body: available
// range: 0x1001aa2dc-0x1001aa513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001aa2dc(ID param_1)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [16];
  long alStack_70 [4];
  
  puVar2 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar5 = (long)puVar6 - extraout_x12;
  IVar3 = _objc_msgSend(param_1,"bundleURL");
  bVar1 = IVar3 == 0;
  if (bVar1) {
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar6);
    IVar3 = 0;
    __s10Foundation3URLVMa();
  }
  lVar8 = *(long *)(IVar3 - 8);
  (**(code **)(lVar8 + 0x38))(puVar6,bVar1,1,IVar3);
  FUN_1001ac274(puVar6,lVar5);
  __s10Foundation3URLVMa(0);
  uVar4 = 1;
  lVar7 = lVar5;
  (**(code **)(lVar8 + 0x30))(lVar5,1,IVar3);
  if ((int)lVar7 == 1) {
    FUN_100040bb4(lVar5,&DAT_100a766c8,&DAT_10080b1d0);
    lVar7 = 0;
    uVar4 = 0xe000000000000000;
  }
  else {
    __s10Foundation3URLV4pathSSvg();
    (**(code **)(lVar8 + 8))(lVar5,IVar3);
  }
  IVar3 = _objc_msgSend(param_1,"forceTerminate");
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(long *)(lVar5 + -0x20) = lVar7;
  *(undefined8 *)(lVar5 + -0x18) = uVar4;
  *(ID *)(lVar5 + -0x10) = param_1;
  if ((int)IVar3 == 0) {
    FUN_1003fb4ec(FUN_1001ac364,lVar5 + -0x30,0xd000000000000093,0x800000010089a630,
                  0xd000000000000015,0x800000010089a890,0x256,0);
  }
  else {
    FUN_1003fb48c(FUN_1001ac390,lVar5 + -0x30,0xd000000000000093,0x800000010089a630,
                  0xd000000000000015,0x800000010089a890,0x254,0);
  }
  _swift_bridgeObjectRelease(uVar4);
  return;
}

