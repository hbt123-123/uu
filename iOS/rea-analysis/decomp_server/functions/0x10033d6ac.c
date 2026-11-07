// rea decompile_all
// name: FUN_10033d6ac
// address: 0x10033d6ac
// body: available
// range: 0x10033d6ac-0x10033d76f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033d6ac(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = &DAT_100a86ef0;
  FUN_100004bb4(&DAT_100a86ef0,&DAT_10081ae80);
  lVar2 = 0;
  __s10Foundation8URLErrorV4CodeVMa();
  lVar5 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar6 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar1,uVar6 + *(long *)(lVar5 + 0x48),uVar4 | 7);
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  __s10Foundation8URLErrorV4CodeV22notConnectedToInternetAEvgZ(puVar1 + uVar6);
  puVar3 = puVar1;
  FUN_100347f1c();
  _swift_setDeallocating(puVar1);
  (**(code **)(lVar5 + 8))(puVar1 + uVar6,lVar2);
  _swift_deallocClassInstance(puVar1,0x20,7);
  DAT_100b365c0 = puVar3;
  return;
}

