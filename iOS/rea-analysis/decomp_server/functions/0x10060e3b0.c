// rea decompile_all
// name: FUN_10060e3b0
// address: 0x10060e3b0
// body: available
// range: 0x10060e3b0-0x10060e45f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_10060e3b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined *puStack_50;
  
  puVar1 = PTR___s7Combine6FutureCMo_100995530;
  lVar4 = *unaff_x20;
  FUN_100616218(0,*(undefined8 *)(lVar4 + *(long *)PTR___s7Combine6FutureCMo_100995530));
  puVar2 = &DAT_1009dec80;
  _swift_allocObject(&DAT_1009dec80,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  lVar4 = lVar4 + *(long *)puVar1;
  local_60 = *(undefined8 *)(lVar4 + 8);
  local_58 = *(undefined8 *)(lVar4 + 0x10);
  pcVar3 = FUN_10060e608;
  puStack_50 = puVar2;
  FUN_1006152f0(FUN_10060e608,auStack_70);
  _swift_release(puVar2);
  return pcVar3;
}

