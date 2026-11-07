// rea decompile_all
// name: FUN_100672100
// address: 0x100672100
// body: available
// range: 0x100672100-0x10067223f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100672100(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  FUN_100671424();
  puVar6 = (undefined *)(param_4 >> 1);
  puVar1 = puVar6 + -param_3;
  if (SBORROW8((long)puVar6,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10067223c);
    (*pcVar2)();
  }
  if ((long)puVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100672240);
    (*pcVar2)();
  }
  _swift_retain();
  _swift_unknownObjectRetain(param_1);
  if (puVar1 == (undefined *)0x0) {
    FUN_100671e78();
    _swift_bridgeObjectRelease();
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    puVar3 = puVar1;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (puVar1,PTR___ss5UInt8VN_100995d40);
    *(undefined **)(puVar3 + 0x10) = puVar1;
    puVar4 = puVar3;
    FUN_100671e78();
    uVar5 = 0;
    puVar7 = (undefined *)0x0;
    do {
      if (uVar5 == 0x10) {
        _swift_bridgeObjectRelease();
        FUN_100671e78();
        if (((long)puVar7 < param_3) || (puVar6 <= puVar7)) {
LAB_100672230:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100672234);
          (*pcVar2)();
        }
        uVar5 = 0;
      }
      else if (((long)puVar7 < param_3) || (puVar6 <= puVar7)) goto LAB_100672230;
      if (*(ulong *)(puVar4 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100672238);
        (*pcVar2)();
      }
      (puVar3 + (long)puVar7)[0x20] = puVar4[uVar5 + 0x20] ^ puVar7[param_2];
      puVar7 = puVar7 + 1;
      uVar5 = uVar5 + 1;
    } while (puVar1 != puVar7);
    _swift_bridgeObjectRelease();
  }
  *(undefined **)(puVar3 + 0x10) = puVar1;
  _swift_release();
  _swift_unknownObjectRelease(param_1);
  return puVar3;
}

