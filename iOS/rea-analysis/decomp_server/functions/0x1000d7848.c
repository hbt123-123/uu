// rea decompile_all
// name: FUN_1000d7848
// address: 0x1000d7848
// body: available
// range: 0x1000d7848-0x1000d7a33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000d7848(ulong param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined1 *local_70;
  long lStack_68;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar8 = (long)puVar5 - extraout_x12;
  uVar4 = param_1;
  uVar6 = param_2;
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar8);
  __s10Foundation3URLV13pathExtensionSSvg();
  pcVar10 = *(code **)(lVar9 + 8);
  (*pcVar10)(lVar8,lVar3);
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(puVar5,param_1,param_2);
  __s10Foundation3URLV21deletingPathExtensionACyF(lVar8);
  lVar9 = lVar3;
  (*pcVar10)();
  __s10Foundation3URLV17lastPathComponentSSvg();
  (*pcVar10)(lVar8,lVar3);
  uVar1 = uVar4 & 0xffffffffffff;
  if ((uVar6 & 0x2000000000000000) != 0) {
    uVar1 = uVar6 >> 0x38 & 0xf;
  }
  local_78 = param_3;
  local_70 = puVar5;
  lStack_68 = lVar9;
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(uVar6);
    __sSS6appendyySSF(0x28,0xe100000000000000);
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar7);
    __sSS6appendyySSF(0x29,0xe100000000000000);
  }
  else {
    __sSS6appendyySSF(0x28,0xe100000000000000);
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar7);
    __sSS6appendyySSF(0x2e29,0xe200000000000000);
    __sSS6appendyySSF(uVar4,uVar6);
    _swift_bridgeObjectRelease(uVar6);
  }
  auVar2._8_8_ = lStack_68;
  auVar2._0_8_ = local_70;
  return auVar2;
}

