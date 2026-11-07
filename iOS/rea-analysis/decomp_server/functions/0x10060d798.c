// rea decompile_all
// name: FUN_10060d798
// address: 0x10060d798
// body: available
// range: 0x10060d798-0x10060d857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10060d798(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __ss6ResultOMa(0,param_4,PTR___ss5NeverON_100995d08,PTR___ss5NeverOs5ErrorsWP_100995d10);
  lVar3 = *(long *)(lVar1 + -8);
  puVar2 = &stack0xffffffffffffffb0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))(puVar2,param_1,param_4);
  _swift_storeEnumTagMultiPayload(puVar2,lVar1,0);
  (*param_2)(puVar2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}

