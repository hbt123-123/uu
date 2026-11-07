// rea decompile_all
// name: FUN_10060e2f4
// address: 0x10060e2f4
// body: available
// range: 0x10060e2f4-0x10060e3af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10060e2f4(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar1 = &DAT_100aaffb8;
  FUN_100004c48(&DAT_100aaffb8,&DAT_100848630);
  lVar2 = 0;
  __ss6ResultOMa(0,param_4,puVar1,PTR___ss5ErrorWS_100995c48);
  lVar4 = *(long *)(lVar2 + -8);
  puVar3 = (undefined8 *)
           (&stack0xffffffffffffffc0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar3 = param_1;
  _swift_storeEnumTagMultiPayload(puVar3,lVar2,1);
  _swift_errorRetain(param_1);
  (*param_2)(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar2);
  return;
}

