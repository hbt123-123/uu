// rea decompile_all
// name: FUN_10063df50
// address: 0x10063df50
// body: available
// range: 0x10063df50-0x10063e05b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_10063df50(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,undefined *param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if ((long)param_5 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10063e040);
    (*pcVar2)();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (param_5 != (undefined *)0x0) {
    puVar3 = param_5;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (param_5,PTR___ss5UInt8VN_100995d40);
    *(undefined **)(puVar3 + 0x10) = param_5;
    _bzero(puVar3 + 0x20,(size_t)param_5);
  }
  uVar1 = (param_4 >> 1) - param_3;
  if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10063e044);
    (*pcVar2)();
  }
  if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10063e048);
    (*pcVar2)();
  }
  _swift_unknownObjectRetain(param_1);
  FUN_10063e8ec();
  _swift_unknownObjectRelease(param_1);
  puVar4 = puVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar4 & 1) == 0) {
    FUN_1006541b8();
  }
  if (*(ulong *)(puVar3 + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10063e05c);
    (*pcVar2)();
  }
  puVar3[uVar1 + 0x20] = puVar3[uVar1 + 0x20] | 0x80;
  return puVar3;
}

