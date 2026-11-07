// rea decompile_all
// name: FUN_100616054
// address: 0x100616054
// body: available
// range: 0x100616054-0x100616113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100616054(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long *unaff_x20;
  code *pcVar4;
  
  uVar1 = 0xff;
  FUN_100616300(0xff,*(undefined8 *)(*unaff_x20 + 0x50));
  lVar2 = 0;
  FUN_100608524(0,uVar1);
  FUN_1006082d4();
  unaff_x20[2] = lVar2;
  puVar3 = &DAT_1009dfcf8;
  _swift_allocObject(&DAT_1009dfcf8,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(long *)(puVar3 + 0x18) = param_3;
  *(long *)(puVar3 + 0x20) = lVar2;
  pcVar4 = *(code **)(param_3 + 0x10);
  _swift_retain(lVar2);
  (*pcVar4)(FUN_10060cfbc,puVar3,param_2,param_3);
  _swift_release(puVar3);
  return;
}

