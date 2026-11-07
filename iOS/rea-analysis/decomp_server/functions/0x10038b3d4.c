// rea decompile_all
// name: FUN_10038b3d4
// address: 0x10038b3d4
// body: available
// range: 0x10038b3d4-0x10038b4db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038b3d4(undefined8 *param_1,undefined8 *param_2,char *param_3)

{
  undefined1 *puVar1;
  size_t sVar2;
  undefined8 *puVar3;
  size_t *psVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  size_t *psVar7;
  char local_5a [2];
  undefined1 auStack_58 [8];
  undefined1 *local_50;
  
  psVar7 = (size_t *)(param_3 + 2);
  sVar2 = (ulong)(byte)param_3[1];
  if (*param_3 != '\0') {
    sVar2 = *psVar7;
  }
  thunk_FUN_10037e7cc(local_5a,sVar2 + 4);
  puVar1 = auStack_58;
  if (local_5a[0] != '\0') {
    puVar1 = local_50;
  }
  sVar2 = (ulong)(byte)param_3[1];
  psVar4 = psVar7;
  if (*param_3 != '\0') {
    sVar2 = *psVar7;
    psVar4 = *(size_t **)(param_3 + 10);
  }
  _memcpy(puVar1,psVar4,sVar2);
  sVar2 = (ulong)(byte)param_3[1];
  if (*param_3 != '\0') {
    sVar2 = *psVar7;
  }
  *(undefined4 *)(puVar1 + sVar2) = *(undefined4 *)*param_1;
  puVar6 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)puVar6[1];
  if (puVar3 < (undefined8 *)puVar6[2]) {
    puVar5 = puVar3 + 5;
    *puVar3 = *param_2;
    FUN_10037eac4(puVar3 + 1,local_5a);
  }
  else {
    puVar5 = puVar6;
    FUN_10038bc68(puVar6,param_2,local_5a);
  }
  puVar6[1] = puVar5;
  thunk_FUN_10037edac(local_5a);
  return;
}

