// rea decompile_all
// name: FUN_10060d858
// address: 0x10060d858
// body: available
// range: 0x10060d858-0x10060d8ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10060d858(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
  uVar3 = *(undefined8 *)(*unaff_x20 + 0x50);
  puVar1 = &DAT_100aaffb8;
  FUN_100004c48(&DAT_100aaffb8,&DAT_100848630);
  __s7Combine6FutureCMa(0,uVar3,puVar1,PTR___ss5ErrorWS_100995c48);
  puVar1 = &DAT_1009dec30;
  _swift_allocObject(&DAT_1009dec30,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  puVar2 = &DAT_1009dec58;
  _swift_allocObject(&DAT_1009dec58,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  __s7Combine6FutureCyACyxq_Gyys6ResultOyxq_GcccfC(FUN_10060e210,puVar2);
  return;
}

