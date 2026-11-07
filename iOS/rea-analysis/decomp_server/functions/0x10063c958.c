// rea decompile_all
// name: FUN_10063c958
// address: 0x10063c958
// body: available
// range: 0x10063c958-0x10063cb2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10063c958(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined *puVar8;
  long lVar9;
  
  if ((*(byte *)(unaff_x20 + 0x68) & 1) != 0) {
    return param_1;
  }
  puVar8 = *(undefined **)(unaff_x20 + 0x30);
  puVar2 = puVar8;
  uVar6 = param_1;
  uVar7 = param_3;
  FUN_100630194();
  if ((uVar7 & 1) == 0) {
    _swift_unknownObjectRetain(param_1);
LAB_10063c9d0:
    puVar3 = puVar2;
    thunk_FUN_100629d98(puVar2,uVar6,param_2,uVar7);
  }
  else {
    uVar4 = 0;
    __ss28__ContiguousArrayStorageBaseCMa();
    _swift_unknownObjectRetain_n(puVar2,2);
    _swift_unknownObjectRetain(param_1);
    puVar5 = puVar2;
    _swift_dynamicCastClass(puVar2,uVar4);
    if (puVar5 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar2);
      puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar9 = *(long *)(puVar5 + 0x10);
    _swift_release();
    if (SBORROW8(uVar7 >> 1,param_2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10063cb1c);
      (*pcVar1)();
    }
    if (lVar9 != (uVar7 >> 1) - param_2) {
      _swift_unknownObjectRelease();
      goto LAB_10063c9d0;
    }
    puVar5 = puVar2;
    _swift_dynamicCastClass(puVar2,uVar4);
    _swift_unknownObjectRelease(puVar2);
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar5 != (undefined *)0x0) goto LAB_10063ca7c;
  }
  _swift_unknownObjectRelease(puVar2);
  puVar5 = puVar3;
LAB_10063ca7c:
  uVar6 = *(undefined8 *)(unaff_x20 + 0xc0);
  *(undefined **)(unaff_x20 + 0xc0) = puVar5;
  _swift_bridgeObjectRelease(uVar6);
  param_4 = param_4 >> 1;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063cb00);
    (*pcVar1)();
  }
  puVar2 = (undefined *)(param_4 - param_3);
  if ((long)puVar8 <= (long)(param_4 - param_3)) {
    puVar2 = puVar8;
  }
  if (SBORROW8(0,(long)puVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063cb04);
    (*pcVar1)();
  }
  lVar9 = param_4 + -(long)puVar2;
  if (SCARRY8(param_4,-(long)puVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063cb08);
    (*pcVar1)();
  }
  if ((long)param_3 <= lVar9) {
    if ((long)param_4 < (long)param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10063cb10);
      (*pcVar1)();
    }
    if (lVar9 <= (long)param_4) {
      if (-1 < lVar9) {
        return param_1;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10063cb18);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063cb14);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10063cb0c);
  (*pcVar1)();
}

