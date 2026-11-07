// rea decompile_all
// name: FUN_10060d540
// address: 0x10060d540
// body: available
// range: 0x10060d540-0x10060d5d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10060d540(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
  uVar3 = *(undefined8 *)(*unaff_x20 + 0x50);
  __s7Combine6FutureCMa(0,uVar3,PTR___ss5NeverON_100995d08,PTR___ss5NeverOs5ErrorsWP_100995d10);
  puVar1 = &DAT_1009debe0;
  _swift_allocObject(&DAT_1009debe0,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  puVar2 = &DAT_1009dec08;
  _swift_allocObject(&DAT_1009dec08,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  __s7Combine6FutureCyACyxq_Gyys6ResultOyxq_GcccfC(FUN_10060d790,puVar2);
  return;
}

