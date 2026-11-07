// rea decompile_all
// name: FUN_1007d55d4
// address: 0x1007d55d4
// body: available
// range: 0x1007d55d4-0x1007d56ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1007d55d4(code *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  __s10Foundation13URLComponentsVMa();
  lVar8 = *(long *)(lVar1 + -8);
  puVar7 = auStack_70 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100abd468;
  FUN_1007b4550();
  lVar4 = (long)puVar7 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = unaff_x20 + _TtC6Sentry12UrlSanitized::components;
  _swift_beginAccess(lVar3,auStack_68,0,0);
  FUN_1007d5db8(lVar3,lVar4);
  lVar3 = lVar4;
  (**(code **)(lVar8 + 0x30))(lVar4,1,lVar1);
  puVar5 = (undefined1 *)0x0;
  lVar6 = 0;
  if ((int)lVar3 == 0) {
    puVar5 = puVar7;
    lVar6 = lVar4;
    (**(code **)(lVar8 + 0x10))(puVar7,lVar4,lVar1);
    (*param_1)();
    (**(code **)(lVar8 + 8))(puVar7,lVar1);
  }
  FUN_1004060f4(lVar4);
  auVar9._8_8_ = lVar6;
  auVar9._0_8_ = puVar5;
  return auVar9;
}

