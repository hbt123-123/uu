// rea decompile_all
// name: FUN_1005ceba0
// address: 0x1005ceba0
// body: available
// range: 0x1005ceba0-0x1005cecbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1005ceba0(undefined8 *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  std::mutex::lock();
  if (*(int *)(param_1 + 0x14) != 2) {
    if (*(int *)(param_1 + 0x14) != 1) {
      *(undefined4 *)(param_1 + 0x14) = 1;
      while (param_1[0x13] != 0) {
        std::condition_variable::wait((unique_lock *)(param_1 + 0xd));
      }
      uVar3 = *param_1;
      *param_1 = 0;
      bVar1 = true;
      goto LAB_1005cec38;
    }
    do {
      std::condition_variable::wait((unique_lock *)(param_1 + 0xd));
    } while (*(int *)(param_1 + 0x14) != 2);
  }
  bVar1 = false;
  uVar3 = 0;
LAB_1005cec38:
  std::mutex::unlock();
  if (bVar1) {
    FUN_1006a97a0(uVar3,1);
    puVar2 = param_1 + 1;
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      puVar2 = (undefined8 *)*puVar2;
    }
    FUN_1006a9644(puVar2);
    FUN_1005cecbc(param_1 + 4,0);
    std::mutex::lock();
    *(undefined4 *)(param_1 + 0x14) = 2;
    std::mutex::unlock();
    std::condition_variable::notify_all();
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

