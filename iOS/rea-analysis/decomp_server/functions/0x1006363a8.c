// rea decompile_all
// name: FUN_1006363a8
// address: 0x1006363a8
// body: available
// range: 0x1006363a8-0x1006364b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1006363a8(long param_1,long param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  param_4 = param_4 >> 1;
  puVar4 = (undefined *)(param_4 - param_3);
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006364b0);
    (*pcVar2)();
  }
  puVar5 = *(undefined **)(param_1 + 0x10);
  puVar1 = puVar4;
  if ((long)puVar5 <= (long)puVar4) {
    puVar1 = puVar5;
  }
  puVar3 = puVar1;
  _swift_slowAlloc(puVar1,0xffffffffffffffff);
  if ((long)puVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006364b4);
    (*pcVar2)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (puVar1 != (undefined *)0x0) {
    _bzero(puVar3,(size_t)puVar1);
    if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006364b8);
      (*pcVar2)();
    }
    puVar4 = (undefined *)0x0;
    do {
      puVar5 = puVar4 + param_3;
      if (SCARRY8(param_3,(long)puVar4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006364a8);
        (*pcVar2)();
      }
      if (((long)puVar5 < param_3) || ((long)param_4 <= (long)puVar5)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006364ac);
        (*pcVar2)();
      }
      puVar3[(long)puVar4] = puVar5[param_2] ^ puVar4[param_1 + 0x20];
      puVar4 = puVar4 + 1;
    } while (puVar1 != puVar4);
    puVar4 = puVar1;
    FUN_100630840(puVar1,0);
    _memcpy(puVar4 + 0x20,puVar3,(size_t)puVar1);
  }
  _swift_slowDealloc(puVar3,0xffffffffffffffff,0xffffffffffffffff);
  return puVar4;
}

