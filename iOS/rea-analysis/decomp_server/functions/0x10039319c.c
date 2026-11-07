// rea decompile_all
// name: FUN_10039319c
// address: 0x10039319c
// body: available
// range: 0x10039319c-0x1003932a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10039319c(long param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  size_t sVar5;
  
  if (param_3 != 0) {
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar1 = (int)param_3 * 8;
    *(uint *)(param_1 + 0x10) = uVar3 + uVar1;
    *(uint *)(param_1 + 0x14) =
         *(int *)(param_1 + 0x14) + (int)(param_3 >> 0x1d) + (uint)CARRY4(uVar3,uVar1);
    uVar4 = (ulong)*(uint *)(param_1 + 0x58);
    if (*(uint *)(param_1 + 0x58) != 0) {
      puVar2 = (undefined8 *)(param_1 + 0x18);
      if ((param_3 < 0x40) && (uVar4 + param_3 < 0x40)) {
        _memcpy((void *)((long)puVar2 + uVar4),param_2,param_3);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)param_3;
        return 1;
      }
      sVar5 = 0x40 - uVar4;
      _memcpy((void *)((long)puVar2 + uVar4),param_2,sVar5);
      FUN_1003932a8(param_1,puVar2,1);
      param_2 = (void *)((long)param_2 + sVar5);
      param_3 = param_3 - sVar5;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *puVar2 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    if (0x3f < param_3) {
      FUN_1003932a8(param_1,param_2,param_3 >> 6);
      param_2 = (void *)((long)param_2 + (param_3 & 0xffffffffffffffc0));
      param_3 = param_3 & 0x3f;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x58) = (int)param_3;
      _memcpy((void *)(param_1 + 0x18),param_2,param_3);
    }
  }
  return 1;
}

