// rea decompile_all
// name: FUN_10026d078
// address: 0x10026d078
// body: available
// range: 0x10026d078-0x10026d1f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10026d078(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar3 + -8);
  puVar8 = &stack0xffffffffffffffb0 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_10026d874();
  puVar7 = (undefined8 *)
           (puVar8 + -(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_100082394();
  puVar5 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,lVar4);
  if ((int)puVar5 == 0) {
    uVar2 = *puVar7;
    uVar1 = puVar7[1];
    __ss6HasherV8_combineyySuF(0);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar2,uVar1);
    FUN_100006cdc(uVar2,uVar1);
  }
  else if ((int)puVar5 == 1) {
    (**(code **)(lVar9 + 0x20))(puVar8,puVar7,lVar3);
    __ss6HasherV8_combineyySuF(1);
    puVar6 = &DAT_100a81028;
    FUN_100005c90(&DAT_100a81028,PTR___s10Foundation3URLVMa_100996188,
                  PTR___s10Foundation3URLVSHAAMc_1009961a0);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar3,puVar6);
    (**(code **)(lVar9 + 8))(puVar8,lVar3);
  }
  else {
    uVar2 = puVar7[1];
    __ss6HasherV8_combineyySuF(2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  return;
}

