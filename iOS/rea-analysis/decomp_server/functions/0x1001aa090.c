// rea decompile_all
// name: FUN_1001aa090
// address: 0x1001aa090
// body: available
// range: 0x1001aa090-0x1001aa2db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001aa090(ID param_1)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x12;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [16];
  long alStack_70 [4];
  
  puVar2 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar8 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar7 = (long)puVar8 - extraout_x12;
  IVar3 = _objc_msgSend(param_1,"activateWithOptions:",2);
  IVar4 = _objc_msgSend(param_1,"bundleURL");
  bVar1 = IVar4 == 0;
  if (bVar1) {
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar8);
    IVar4 = 0;
    __s10Foundation3URLVMa();
  }
  lVar10 = *(long *)(IVar4 - 8);
  (**(code **)(lVar10 + 0x38))(puVar8,bVar1,1,IVar4);
  FUN_1001ac274(puVar8,lVar7);
  __s10Foundation3URLVMa(0);
  uVar6 = 1;
  lVar9 = lVar7;
  (**(code **)(lVar10 + 0x30))(lVar7,1,IVar4);
  if ((int)lVar9 == 1) {
    FUN_100040bb4(lVar7,&DAT_100a766c8,&DAT_10080b1d0);
    lVar9 = 0;
    uVar6 = 0xe000000000000000;
  }
  else {
    __s10Foundation3URLV4pathSSvg();
    (**(code **)(lVar10 + 8))(lVar7,IVar4);
  }
  uVar5 = 0;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)(uVar5);
  *(long *)(lVar7 + -0x20) = lVar9;
  *(undefined8 *)(lVar7 + -0x18) = uVar6;
  *(ID *)(lVar7 + -0x10) = param_1;
  if ((int)IVar3 == 0) {
    FUN_1003fb4ec(FUN_1001ac3bc,lVar7 + -0x30,0xd000000000000093,0x800000010089a630,
                  0x28707041776f6873,0xeb00000000293a5f,0x22a,0);
  }
  else {
    FUN_1003fb48c(FUN_1001ac404,lVar7 + -0x30,0xd000000000000093,0x800000010089a630,
                  0x28707041776f6873,0xeb00000000293a5f,0x228,0);
  }
  _swift_bridgeObjectRelease(uVar6);
  return;
}

