// rea decompile_all
// name: FUN_1002e5464
// address: 0x1002e5464
// body: available
// range: 0x1002e5464-0x1002e5563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e5464(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar4 + -8);
  lVar7 = (long)&local_70 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a83828;
  puVar6 = &DAT_100817d88;
  FUN_100004bb4(&DAT_100a83828,&DAT_100817d88);
  iVar1 = *(int *)(puVar5 + 0x30);
  local_70 = 0x7269666f6d616c41;
  uStack_68 = 0xea00000000005f65;
  __s10Foundation3URLV17lastPathComponentSSvg();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  uVar3 = uStack_68;
  uVar2 = local_70;
  __s10Foundation3URLV25deletingLastPathComponentACyF(lVar7);
  __s10Foundation3URLV22appendingPathComponentyACSSF(param_1,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  (**(code **)(lVar8 + 8))(lVar7,lVar4);
  *(undefined8 *)(param_1 + iVar1) = 0;
  return;
}

