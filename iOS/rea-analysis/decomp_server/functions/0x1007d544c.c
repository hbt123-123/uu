// rea decompile_all
// name: FUN_1007d544c
// address: 0x1007d544c
// body: available
// range: 0x1007d544c-0x1007d554f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1007d544c(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0;
  __s10Foundation13URLComponentsVMa();
  lVar7 = *(long *)(lVar1 + -8);
  puVar6 = auStack_60 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100abd468;
  FUN_1007b4550();
  lVar4 = (long)puVar6 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = unaff_x20 + _TtC6Sentry12UrlSanitized::components;
  _swift_beginAccess(lVar3,auStack_58,0,0);
  FUN_1007d5db8(lVar3,lVar4);
  lVar3 = lVar4;
  (**(code **)(lVar7 + 0x30))(lVar4,1,lVar1);
  puVar5 = (undefined1 *)0x0;
  if ((int)lVar3 == 0) {
    puVar5 = puVar6;
    (**(code **)(lVar7 + 0x10))(puVar6,lVar4,lVar1);
    __s10Foundation13URLComponentsV10queryItemsSayAA12URLQueryItemVGSgvg();
    (**(code **)(lVar7 + 8))(puVar6,lVar1);
  }
  FUN_1004060f4(lVar4);
  return puVar5;
}

