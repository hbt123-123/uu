// rea decompile_all
// name: FUN_1007a172c
// address: 0x1007a172c
// body: available
// range: 0x1007a172c-0x1007a182b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007a172c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_50 [4];
  
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_100abb670);
  puVar2 = DAT_100b2e2c8;
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100abb670);
  if (((puVar2 != (undefined8 *)0x0) &&
      (uVar1 = param_1, _dladdr(param_1,local_50), (int)uVar1 != 0)) && (local_50[0] != 0)) {
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    FUN_10079a87c(param_1,local_50[0],&local_90,0);
    if ((int)param_1 != 0) {
      puVar2 = _malloc(0x50);
      *(undefined1 *)(puVar2 + 8) = 1;
      puVar2[1] = uStack_88;
      *puVar2 = local_90;
      puVar2[3] = uStack_78;
      puVar2[2] = uStack_80;
      puVar2[5] = uStack_68;
      puVar2[4] = local_70;
      puVar2[7] = uStack_58;
      puVar2[6] = uStack_60;
      puVar2[9] = 0;
      _pthread_mutex_lock((pthread_mutex_t *)&DAT_100abb670);
      if (DAT_100b2e2c8 == (undefined8 *)0x0) {
        _free(puVar2);
        puVar2 = (undefined8 *)0x0;
      }
      else {
        DAT_100b2e2c8[9] = puVar2;
        DAT_100b2e2c8 = puVar2;
      }
      _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100abb670);
      if ((puVar2 != (undefined8 *)0x0) && (DAT_100b2e2d0 != (code *)0x0)) {
        (*DAT_100b2e2d0)(puVar2);
      }
    }
  }
  return;
}

