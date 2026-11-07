// rea decompile_all
// name: FUN_1006a2044
// address: 0x1006a2044
// body: available
// range: 0x1006a2044-0x1006a21af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a2044(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 ****ppppuVar3;
  undefined8 *puVar4;
  undefined8 ***local_b8 [2];
  char local_a1;
  undefined8 **local_a0;
  undefined8 **ppuStack_98;
  undefined8 **local_90;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  void *local_68 [2];
  char local_51;
  
  FUN_1006a1e14(local_68,param_1,param_2,param_4);
  local_80 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_1006a1ec4();
  if (local_80 != local_78) {
    puVar4 = local_80;
    do {
      sVar1 = param_3[1];
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        sVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
      }
      FUN_1006a5804(local_b8,sVar1 + 1,&local_a0);
      ppppuVar3 = (undefined8 ****)local_b8[0];
      if (-1 < local_a1) {
        ppppuVar3 = local_b8;
      }
      if (sVar1 != 0) {
        puVar2 = (void *)*param_3;
        if (-1 < *(char *)((long)param_3 + 0x17)) {
          puVar2 = param_3;
        }
        _memmove(ppppuVar3,puVar2,sVar1);
      }
      *(undefined2 *)((long)ppppuVar3 + sVar1) = 0x2f;
      puVar2 = (undefined8 *)*puVar4;
      if (-1 < *(char *)((long)puVar4 + 0x17)) {
        puVar2 = puVar4;
      }
      ppppuVar3 = local_b8;
      std::string::append((char *)ppppuVar3,(ulong)puVar2);
      local_90 = ppppuVar3[2];
      ppuStack_98 = ppppuVar3[1];
      local_a0 = *ppppuVar3;
      ppppuVar3[1] = (undefined8 ***)0x0;
      ppppuVar3[2] = (undefined8 ***)0x0;
      *ppppuVar3 = (undefined8 ***)0x0;
      FUN_1006a21b0(param_6,&local_a0);
      if ((long)local_90 < 0) {
        operator_delete(local_a0);
      }
      if (local_a1 < '\0') {
        operator_delete(local_b8[0]);
      }
      puVar4 = puVar4 + 3;
    } while (puVar4 != local_78);
  }
  local_a0 = &local_80;
  FUN_1006a5778(&local_a0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  return;
}

