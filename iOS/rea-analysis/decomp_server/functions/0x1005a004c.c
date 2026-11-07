// rea decompile_all
// name: FUN_1005a004c
// address: 0x1005a004c
// body: available
// range: 0x1005a004c-0x1005a0123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1005a004c(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_78 [24];
  ulong local_60;
  long lStack_58;
  
  FUN_10056abdc(param_1,&DAT_1009d5f48,FUN_1005a8794);
  lVar6 = *(long *)(param_1 + 0x10);
  uVar7 = 0xffffffffffffffff;
  lVar4 = param_1 + 0x20;
  do {
    lVar1 = uVar7 - lVar6;
    if (lVar1 == -1) break;
    uVar7 = uVar7 + 1;
    if (*(ulong *)(param_1 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005a0124);
      (*pcVar3)();
    }
    FUN_1000b142c(lVar4,auStack_78);
    lVar2 = lStack_58;
    uVar5 = local_60;
    FUN_10003f030(auStack_78,local_60);
    (**(code **)(lVar2 + 0x20))(uVar5,lVar2);
    FUN_10003f094(auStack_78);
    lVar4 = lVar4 + 0x28;
  } while ((uVar5 & 1) != 0);
  _swift_bridgeObjectRelease(param_1);
  return lVar1 == -1;
}

