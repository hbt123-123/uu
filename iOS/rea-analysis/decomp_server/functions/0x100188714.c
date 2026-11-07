// rea decompile_all
// name: FUN_100188714
// address: 0x100188714
// body: available
// range: 0x100188714-0x1001888af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100188714(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_60 [16];
  long local_50;
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  local_50 = param_1;
  if ((uVar4 == 0x662e63696c627570 && lVar1 == -0x10938d8ad29a9397) ||
     (uVar2 = uVar4,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (uVar4,lVar1,0x662e63696c627570,0xef6c72752d656c69,0), (uVar2 & 1) != 0)) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb45c(FUN_100188a74,auStack_60,0xd0000000000000a5,0x8000000100893d50,0xd000000000000024,
                  0x8000000100898310,0x15,7);
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    FUN_10012b9b0();
    _swift_allocObject();
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar1);
    *(ulong *)(lVar3 + 0x18) = uVar4;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb45c(FUN_100188a4c,auStack_60,0xd0000000000000a5,0x8000000100893d50,0xd000000000000024,
                  0x8000000100898310,0x12,7);
  }
  return lVar3;
}

