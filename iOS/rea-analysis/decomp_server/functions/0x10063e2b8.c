// rea decompile_all
// name: FUN_10063e2b8
// address: 0x10063e2b8
// body: available
// range: 0x10063e2b8-0x10063e547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_10063e2b8(undefined *param_1,undefined *param_2,ulong param_3,ulong param_4,uint param_5)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  
  uVar9 = param_4 >> 1;
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar9 != param_3) {
    uVar7 = *(undefined8 *)(unaff_x20 + 0xa8);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x90);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar10);
    uVar8 = uVar7;
    FUN_10063610c(uVar7,uVar10);
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(uVar10);
    uVar7 = *(undefined8 *)(unaff_x20 + 0xa8);
    *(undefined8 *)(unaff_x20 + 0xa8) = uVar8;
    _swift_bridgeObjectRelease(uVar7);
    pcVar11 = *(code **)(unaff_x20 + 0x20);
    if (pcVar11 == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10063e544);
      (*pcVar11)();
    }
    uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar12 = *(long *)(unaff_x20 + 0xa8);
    lVar5 = *(long *)(lVar12 + 0x10);
    _swift_bridgeObjectRetain(lVar12);
    FUN_10004090c(pcVar11,uVar8);
    lVar2 = lVar12;
    (*pcVar11)(lVar12,lVar12 + 0x20,0,lVar5 << 1 | 1);
    _swift_bridgeObjectRelease(lVar12);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10063e548);
      (*pcVar11)();
    }
    FUN_10007ed2c(pcVar11,uVar8);
    puVar4 = (undefined *)(uVar9 - param_3);
    if (SBORROW8(uVar9,param_3)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10063e538);
      (*pcVar11)();
    }
    if ((long)puVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10063e53c);
      (*pcVar11)();
    }
    if (*(undefined **)(lVar2 + 0x10) < puVar4) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10063e540);
      (*pcVar11)();
    }
    puVar3 = puVar4;
    _swift_slowAlloc(puVar4,0xffffffffffffffff);
    puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar4 != (undefined *)0x0) {
      _bzero(puVar3,(size_t)puVar4);
      puVar6 = (undefined *)0x0;
      uVar1 = param_3;
      if ((long)param_3 <= (long)uVar9) {
        uVar1 = uVar9;
      }
      do {
        if (SCARRY8(param_3,(long)puVar6)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10063e52c);
          (*pcVar11)();
        }
        if ((undefined *)(uVar1 - param_3) == puVar6) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10063e530);
          (*pcVar11)();
        }
        if (puVar4 == puVar6) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10063e534);
          (*pcVar11)();
        }
        puVar3[(long)puVar6] = puVar6[lVar2 + 0x20] ^ param_2[(long)(puVar6 + param_3)];
        puVar6 = puVar6 + 1;
      } while (puVar4 != puVar6);
      puVar6 = puVar4;
      FUN_100630840(puVar4,0);
      _memcpy(puVar6 + 0x20,puVar3,(size_t)puVar4);
    }
    _swift_slowDealloc(puVar3,0xffffffffffffffff,0xffffffffffffffff);
    _swift_bridgeObjectRelease(lVar2);
    if ((param_5 & 1) == 0) {
      param_2 = puVar6 + 0x20;
      param_4 = *(long *)(puVar6 + 0x10) << 1 | 1;
      _swift_bridgeObjectRetain(puVar6);
      param_3 = 0;
      param_1 = puVar6;
    }
    else {
      _swift_unknownObjectRetain(param_1);
    }
    uVar7 = *(undefined8 *)(unaff_x20 + 0xb0);
    _swift_bridgeObjectRetain(uVar7);
    puVar4 = param_1;
    FUN_10063df50(param_1,param_2,param_3,param_4,0x10);
    uVar8 = uVar7;
    FUN_10063610c(uVar7,puVar4);
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(puVar4);
    _swift_unknownObjectRelease(param_1);
    uVar7 = *(undefined8 *)(unaff_x20 + 0xb0);
    *(undefined8 *)(unaff_x20 + 0xb0) = uVar8;
    _swift_bridgeObjectRelease(uVar7);
  }
  return puVar6;
}

