// rea decompile_all
// name: FUN_100691cd8
// address: 0x100691cd8
// body: available
// range: 0x100691cd8-0x100691dff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100691cd8(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  size_t sVar4;
  
  if ((ulong)param_1[3] < param_2) {
    uVar3 = param_1[4];
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = ((param_2 + uVar3) - 1) / uVar3;
    }
    sVar4 = uVar1 * uVar3;
    pvVar2 = _realloc((void *)*param_1,sVar4);
    if (pvVar2 == (void *)0x0) {
      FUN_10069554c("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/autobuffer.cc",0x126
                    ,"__FitSize","p",
                    "_len=%llu, m_nMallocUnitSize=%llu, nMallocSize=%llu, m_nCapacity=%llu");
      _free((void *)*param_1);
      sVar4 = 0;
      *param_1 = 0;
    }
    else {
      *param_1 = pvVar2;
      if (0x3200000 < param_2) {
        FUN_10069554c("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/autobuffer.cc",
                      0x130,"__FitSize","_len <= 50 * 1024 * 1024","%u");
        pvVar2 = (void *)*param_1;
        if (pvVar2 == (void *)0x0) {
          FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/autobuffer.cc",
                        0x131,"__FitSize","parray_");
          pvVar2 = (void *)*param_1;
        }
      }
      _bzero((void *)((long)pvVar2 + param_1[3]),sVar4 - param_1[3]);
    }
    param_1[3] = sVar4;
  }
  return;
}

