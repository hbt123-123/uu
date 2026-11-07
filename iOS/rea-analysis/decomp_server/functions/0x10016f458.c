// rea decompile_all
// name: FUN_10016f458
// address: 0x10016f458
// body: available
// range: 0x10016f458-0x10016f5e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10016f458(double param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  undefined1 auStack_80 [8];
  long local_78;
  undefined *local_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  puVar7 = PTR___ss6UInt32VN_100995dc0;
  puVar4 = PTR___ss6UInt32VN_100995dc0;
  puVar5 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  local_78._0_4_ = param_2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  local_70 = puVar4;
  puStack_68 = puVar5;
  __sSS6appendyySSF(0x5f,0xe100000000000000);
  local_78 = CONCAT44(local_78._4_4_,param_3);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar7,puVar6);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x5f,0xe100000000000000);
  __s10Foundation4DateVACycfC(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar8 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10016f5dc);
    (*pcVar2)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      local_78 = (long)param_1;
      puVar7 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar7);
      auVar1._8_8_ = puStack_68;
      auVar1._0_8_ = local_70;
      return auVar1;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10016f5e4);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10016f5e0);
  (*pcVar2)();
}

