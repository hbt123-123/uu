// rea decompile_all
// name: FUN_10038aec4
// address: 0x10038aec4
// body: available
// range: 0x10038aec4-0x10038b003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10038aec4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_e0 [32];
  long local_c0;
  undefined1 auStack_b8 [32];
  long local_98;
  undefined1 auStack_90 [32];
  long local_70;
  undefined1 auStack_68 [30];
  char local_4a;
  byte local_49;
  ulong local_48;
  ulong *local_40;
  
  puVar5 = auStack_e0;
  FUN_10038bc00(&local_4a,param_2);
  uVar4 = (ulong)local_49;
  puVar2 = &local_48;
  if (local_4a != '\0') {
    uVar4 = local_48;
    puVar2 = local_40;
  }
  puVar3 = auStack_68;
  FUN_10037c13c(puVar3,puVar2,uVar4);
  thunk_FUN_10037c5d4();
  FUN_10037eac4(auStack_90,&local_4a);
  local_70 = ((ulong)puVar3 & 0xffffffff) + 4;
  thunk_FUN_10037edac(&local_4a);
  if (*(long *)(param_1 + 0xb0) == 0) {
    FUN_100380148(*(undefined8 *)(param_1 + 0x68));
  }
  else {
    FUN_100380188(*(undefined8 *)(param_1 + 0x70));
  }
  uVar4 = *(ulong *)(*(long *)(param_1 + 0x80) + 0x28);
  lVar1 = (local_70 + 4U) - uVar4;
  if (local_70 + 4U < uVar4 || lVar1 == 0) {
    puVar5 = auStack_b8;
    FUN_10037eac4(auStack_b8,auStack_90);
    local_98 = local_70;
    lVar6 = 1;
    FUN_1003881f4(param_1,auStack_b8,0,1);
  }
  else {
    FUN_10037eac4(auStack_e0,auStack_90);
    local_c0 = local_70;
    lVar6 = param_1;
    FUN_100388048(param_1,lVar1,auStack_e0,1);
  }
  thunk_FUN_10037edac(puVar5);
  FUN_10037f730(param_1,0);
  thunk_FUN_10037edac(auStack_90);
  return lVar6;
}

