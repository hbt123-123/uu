// rea decompile_all
// name: FUN_10060e884
// address: 0x10060e884
// body: available
// range: 0x10060e884-0x10060e91b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_10060e884(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined *puStack_38;
  
  uVar3 = *(undefined8 *)(*unaff_x20 + *(long *)PTR___s7Combine6FutureCMo_100995530);
  FUN_100614b6c(0,uVar3);
  puVar1 = &DAT_1009deca8;
  _swift_allocObject(&DAT_1009deca8,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  pcVar2 = FUN_10060ea74;
  local_40 = uVar3;
  puStack_38 = puVar1;
  FUN_1006108b8(FUN_10060ea74,auStack_50);
  _swift_release(puVar1);
  return pcVar2;
}

