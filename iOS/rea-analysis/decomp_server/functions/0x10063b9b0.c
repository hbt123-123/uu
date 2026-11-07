// rea decompile_all
// name: FUN_10063b9b0
// address: 0x10063b9b0
// body: available
// range: 0x10063b9b0-0x10063bc3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10063b9b0(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  code *pcVar10;
  
  lVar4 = param_1;
  FUN_10063b608();
  uVar7 = *(ulong *)(lVar4 + 0x28);
  if (uVar7 + 0xf000000000000000 >> 0x3d < 7) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10063bc0c);
    (*pcVar10)();
  }
  if ((uVar7 & 0x1fffffffffffffff) >> 0x3c != 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10063bc10);
    (*pcVar10)();
  }
  uVar8 = *(ulong *)(lVar4 + 0x30);
  if (uVar8 + 0xf000000000000000 >> 0x3d < 7) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10063bc14);
    (*pcVar10)();
  }
  if ((uVar8 & 0x1fffffffffffffff) >> 0x3c != 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10063bc18);
    (*pcVar10)();
  }
  lVar5 = *(long *)(lVar4 + 0x18);
  uVar6 = *(ulong *)(lVar4 + 0x20);
  uVar7 = *(ulong *)(lVar4 + 0x38) ^ uVar7 << 3;
  uVar8 = *(ulong *)(lVar4 + 0x40) ^ uVar8 << 3;
  FUN_10063c228();
  *(ulong *)(lVar4 + 0x38) = uVar7;
  *(ulong *)(lVar4 + 0x40) = uVar8;
  _swift_release(lVar4);
  FUN_10067bccc(*(ulong *)(unaff_x20 + 0x80) ^ uVar7,*(ulong *)(unaff_x20 + 0x88) ^ uVar8);
  puVar1 = *(undefined **)(unaff_x20 + 0x30);
  thunk_FUN_1006337a8();
  if ((uVar6 & 1) == 0) {
LAB_10063ba7c:
    puVar2 = puVar1;
    thunk_FUN_100629d98();
  }
  else {
    uVar9 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar3 = puVar1;
    _swift_unknownObjectRetain_n(puVar1,2);
    _swift_dynamicCastClass();
    if (puVar3 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar1);
      puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar4 = *(long *)(puVar3 + 0x10);
    _swift_release();
    if (SBORROW8(uVar6 >> 1,lVar5)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10063bc1c);
      (*pcVar10)();
    }
    if (lVar4 != (uVar6 >> 1) - lVar5) {
      _swift_unknownObjectRelease();
      goto LAB_10063ba7c;
    }
    puVar3 = puVar1;
    _swift_dynamicCastClass(puVar1,uVar9);
    _swift_unknownObjectRelease(puVar1);
    puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar3 != (undefined *)0x0) goto LAB_10063bb1c;
  }
  _swift_unknownObjectRelease(puVar1);
  puVar3 = puVar2;
LAB_10063bb1c:
  pcVar10 = *(code **)(unaff_x20 + 0x20);
  if (pcVar10 != (code *)0x0) {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
    _swift_retain(uVar9);
    (*pcVar10)(puVar3);
    FUN_10007ed2c(pcVar10,uVar9);
  }
  if ((*(byte *)(unaff_x20 + 0x68) & 1) == 0) {
    lVar4 = (param_4 >> 1) - param_3;
    if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10063bc20);
      (*pcVar10)();
    }
    uVar7 = *(long *)(puVar3 + 0x10) + lVar4;
    if (SCARRY8(*(long *)(puVar3 + 0x10),lVar4)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10063bc3c);
      (*pcVar10)();
    }
    lVar4 = 0;
    FUN_1006295a0(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0,
                  PTR___swiftEmptyArrayStorage_100995ea0);
    _swift_unknownObjectRetain(param_1);
    FUN_100628bc8();
    FUN_100628ae0(puVar3);
  }
  else {
    _swift_unknownObjectRetain(param_1);
    _swift_release(puVar3);
    lVar4 = param_1;
  }
  return lVar4;
}

