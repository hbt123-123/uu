// rea decompile_all
// name: FUN_10063687c
// address: 0x10063687c
// body: available
// range: 0x10063687c-0x1006369cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10063687c(long param_1,undefined8 param_2,ulong param_3,uint param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  byte bVar5;
  
  uVar2 = (param_4 & 0xff) - 2;
  if ((uVar2 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006369c0);
    (*pcVar3)();
  }
  uVar1 = (uint)param_3 & 0xff;
  if ((uVar1 - 1 & 0xffffff00) == 0) {
    bVar5 = 0x40;
    if ((param_5 & 1) == 0) {
      bVar5 = 0;
    }
    lVar4 = 0x10;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (0x10,PTR___ss5UInt8VN_100995d40);
    *(undefined8 *)(lVar4 + 0x10) = 0x10;
    *(undefined8 *)(lVar4 + 0x21) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(byte *)(lVar4 + 0x20) = bVar5 | (byte)((uVar2 >> 1 & 7) << 3);
    if (uVar1 < 0xf) {
      param_3 = param_3 & 0xff;
      if (0xf - param_3 <= *(ulong *)(param_1 + 0x10)) {
        _swift_bridgeObjectRetain(param_1);
        FUN_100634178(1,0x10 - param_3,param_1,param_1 + 0x20,0,(0xf - param_3) * 2 | 1);
        _swift_bridgeObjectRelease(param_1);
        FUN_10063a22c(param_3,param_2);
        FUN_10063e8ec();
        _swift_bridgeObjectRelease(param_3);
        return lVar4;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006369cc);
      (*pcVar3)();
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006369c8);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006369c4);
  (*pcVar3)();
}

