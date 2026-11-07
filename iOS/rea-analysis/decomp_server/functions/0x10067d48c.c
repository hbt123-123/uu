// rea decompile_all
// name: FUN_10067d48c
// address: 0x10067d48c
// body: available
// range: 0x10067d48c-0x10067d66f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_10067d48c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
             long param_5,long param_6)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *local_90;
  long local_88 [4];
  undefined *local_68;
  
  uVar9 = *(undefined8 *)(*(long *)(param_5 + 8) + 8);
  puVar5 = param_3;
  __sSl5countSivgTj(param_3,uVar9);
  uVar10 = *(undefined8 *)(*(long *)(param_6 + 8) + 8);
  puVar6 = param_4;
  __sSl5countSivgTj(param_4,uVar10);
  if ((long)puVar5 <= (long)puVar6) {
    puVar6 = puVar5;
  }
  puVar5 = puVar6;
  _swift_slowAlloc(puVar6,0xffffffffffffffff);
  if ((long)puVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10067d670);
    (*pcVar4)();
  }
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (puVar6 != (undefined *)0x0) {
    _bzero(puVar5,(size_t)puVar6);
    puVar7 = (undefined *)0x0;
    do {
      __sSl10startIndex0B0QzvgTj(local_88,param_3,uVar9);
      if (SCARRY8(local_88[0],(long)puVar7)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10067d668);
        (*pcVar4)();
      }
      pcVar4 = (code *)local_88;
      ppuVar8 = &local_68;
      local_68 = puVar7 + local_88[0];
      __sSly7ElementQz5IndexQzcirTj(pcVar4,ppuVar8,param_3,uVar9);
      bVar2 = *(byte *)ppuVar8;
      (*pcVar4)(local_88,0);
      __sSl10startIndex0B0QzvgTj(local_88,param_4,uVar10);
      if (SCARRY8(local_88[0],(long)puVar7)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10067d66c);
        (*pcVar4)();
      }
      puVar1 = puVar7 + 1;
      pcVar4 = (code *)local_88;
      ppuVar8 = &local_90;
      local_90 = puVar7 + local_88[0];
      __sSly7ElementQz5IndexQzcirTj(pcVar4,ppuVar8,param_4,uVar10);
      bVar3 = *(byte *)ppuVar8;
      (*pcVar4)(local_88,0);
      puVar5[(long)puVar7] = bVar3 ^ bVar2;
      puVar7 = puVar1;
    } while (puVar6 != puVar1);
    puVar7 = puVar6;
    FUN_100630840(puVar6,0);
    _memcpy(puVar7 + 0x20,puVar5,(size_t)puVar6);
  }
  _swift_slowDealloc(puVar5,0xffffffffffffffff,0xffffffffffffffff);
  return puVar7;
}

