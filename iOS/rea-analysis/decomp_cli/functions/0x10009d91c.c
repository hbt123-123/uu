// rea decompile_all
// name: FUN_10009d91c
// address: 0x10009d91c
// body: available
// range: 0x10009d91c-0x10009d9b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10009d91c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar5 = 0;
  uStack_98 = param_1[1];
  local_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  local_80 = param_1[4];
  lVar1 = param_1[5];
  lVar6 = param_1[6];
  cVar3 = *(char *)(param_1 + 7);
  uStack_68 = param_2[1];
  local_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  local_50 = param_2[4];
  lVar2 = param_2[5];
  lVar7 = param_2[6];
  bVar4 = *(byte *)(param_2 + 7);
  FUN_10009ebac(&local_a0,&local_70);
  if (((uVar5 & 1) != 0) && (lVar1 == lVar2)) {
    if (cVar3 == '\0') {
      if (lVar6 != lVar7) {
        bVar4 = 1;
      }
      if ((bVar4 & 1) == 0) {
        return 1;
      }
    }
    else if ((bVar4 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}

