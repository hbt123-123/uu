// rea decompile_all
// name: thunk_FUN_100514e4c
// address: 0x100514ff8
// body: available
// range: 0x100514ff8-0x100514ffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool thunk_FUN_100514e4c(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x20;
  ulong uVar10;
  undefined1 auStack_78 [24];
  ulong uStack_60;
  long lStack_58;
  
  lVar8 = *unaff_x20;
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  __ss15_arrayForceCastySayq_GSayxGr0_lF(lVar8,uVar9,puVar4);
  lVar7 = *(long *)(lVar8 + 0x10);
  uVar10 = 0xffffffffffffffff;
  lVar5 = lVar8 + 0x20;
  do {
    lVar1 = uVar10 - lVar7;
    if (lVar1 == -1) break;
    uVar10 = uVar10 + 1;
    if (*(ulong *)(lVar8 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100514f3c);
      (*pcVar3)();
    }
    FUN_1000b142c(lVar5,auStack_78);
    lVar2 = lStack_58;
    uVar6 = uStack_60;
    FUN_10003f030(auStack_78,uStack_60);
    (**(code **)(lVar2 + 0x20))(uVar6,lVar2);
    FUN_10003f094(auStack_78);
    lVar5 = lVar5 + 0x28;
  } while ((uVar6 & 1) != 0);
  _swift_bridgeObjectRelease(lVar8);
  return lVar1 == -1;
}

