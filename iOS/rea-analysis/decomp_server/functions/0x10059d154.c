// rea decompile_all
// name: FUN_10059d154
// address: 0x10059d154
// body: available
// range: 0x10059d154-0x10059d21f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10059d154(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  ulong uVar8;
  undefined1 auStack_78 [24];
  ulong local_60;
  long lStack_58;
  
  lVar4 = *unaff_x20;
  FUN_10056a3c8();
  lVar7 = *(long *)(lVar4 + 0x10);
  uVar8 = 0xffffffffffffffff;
  lVar5 = lVar4 + 0x20;
  do {
    lVar1 = uVar8 - lVar7;
    if (lVar1 == -1) break;
    uVar8 = uVar8 + 1;
    if (*(ulong *)(lVar4 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10059d220);
      (*pcVar3)();
    }
    FUN_1000b142c(lVar5,auStack_78);
    lVar2 = lStack_58;
    uVar6 = local_60;
    FUN_10003f030(auStack_78,local_60);
    (**(code **)(lVar2 + 0x20))(uVar6,lVar2);
    FUN_10003f094(auStack_78);
    lVar5 = lVar5 + 0x28;
  } while ((uVar6 & 1) != 0);
  _swift_bridgeObjectRelease(lVar4);
  return lVar1 == -1;
}

