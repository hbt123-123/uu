// rea decompile_all
// name: FUN_100170254
// address: 0x100170254
// body: available
// range: 0x100170254-0x1001702ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100170254(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_118 [160];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 local_38;
  
  lVar1 = unaff_x20 + 0x18;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    uStack_70 = 1;
    local_68 = 1;
    uStack_58 = 0xc000000000000000;
    local_60 = 0;
    local_48 = 0;
    local_38 = 0x3000000000000000;
    local_78 = param_2;
    FUN_100193df4(auStack_118,&local_78);
    FUN_1001bddd8(param_1,auStack_118);
    FUN_10016b308(auStack_118);
    _swift_unknownObjectRelease(lVar1);
    FUN_100006cdc(0,0xc000000000000000);
  }
  return;
}

