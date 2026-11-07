// rea decompile_all
// name: FUN_100692cf4
// address: 0x100692cf4
// body: available
// range: 0x100692cf4-0x100692dc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


size_t FUN_100692cf4(long *param_1,void *param_2,ulong param_3,ulong param_4)

{
  size_t sVar1;
  ulong uVar2;
  
  if (param_2 == (void *)0x0) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/ptrbuffer.cc",0x48,
                  "Read","NULL != _pBuffer");
  }
  if ((long)param_4 < 0) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/ptrbuffer.cc",0x49,
                  "Read","0 <= _nPos");
  }
  uVar2 = param_1[2];
  if (uVar2 <= (param_4 & 0xffffffff)) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/ptrbuffer.cc",0x4a,
                  "Read","(unsigned int)_nPos < Length()");
    uVar2 = param_1[2];
  }
  sVar1 = uVar2 - param_4;
  if (param_3 <= uVar2 - param_4) {
    sVar1 = param_3;
  }
  _memcpy(param_2,(void *)(*param_1 + param_1[1]),sVar1);
  return sVar1;
}

