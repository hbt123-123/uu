// rea decompile_all
// name: FUN_10033a3cc
// address: 0x10033a3cc
// body: available
// range: 0x10033a3cc-0x10033a5c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10033a3cc(undefined8 *param_1,ID param_2)

{
  size_t sVar1;
  code *pcVar2;
  bool bVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ID *pIVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar11 = *(long *)((undefined *)*param_1 + 0x10);
  puVar12 = (undefined *)*param_1;
  do {
    do {
      if ((lVar11 < 1) || (IVar4 = _objc_msgSend(param_2,"hasSpaceAvailable"), (int)IVar4 == 0)) {
        return;
      }
      IVar4 = _objc_msgSend(param_2,"write:maxLength:",puVar12 + 0x20,lVar11);
      IVar5 = _objc_msgSend(param_2,"streamError");
      if (IVar5 != 0) {
        uVar8 = 0;
        FUN_100277ad0(0);
        pIVar9 = &DAT_100a824a8;
        FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
        _swift_allocError(uVar8,pIVar9,0,0);
        *pIVar9 = IVar5;
        uVar10 = 0;
        FUN_100278198(0);
        _swift_storeEnumTagMultiPayload(pIVar9,uVar10,0xb);
        _swift_storeEnumTagMultiPayload(pIVar9,uVar8,4);
        _swift_willThrow();
        return;
      }
      bVar3 = SBORROW8(lVar11,IVar4);
      lVar11 = lVar11 - IVar4;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10033a5bc);
        (*pcVar2)();
      }
    } while (lVar11 < 1);
    if (*(long *)(puVar12 + 0x10) < (long)IVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10033a5c0);
      (*pcVar2)();
    }
    if ((long)IVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10033a5c4);
      (*pcVar2)();
    }
    puVar6 = puVar12;
    if (IVar4 != 0) {
      sVar1 = *(long *)(puVar12 + 0x10) - IVar4;
      puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (sVar1 != 0) {
        if (0 < (long)sVar1) {
          puVar6 = &DAT_100a83340;
          FUN_100004bb4(&DAT_100a83340,&DAT_10081abf0);
          _swift_allocObject();
          puVar7 = puVar6;
          _malloc_size();
          *(size_t *)(puVar6 + 0x10) = sVar1;
          *(long *)(puVar6 + 0x18) = (long)puVar7 * 2 + -0x40;
        }
        _memcpy(puVar6 + 0x20,puVar12 + 0x20 + IVar4,sVar1);
      }
      _swift_bridgeObjectRelease(puVar12);
    }
    *param_1 = puVar6;
    puVar12 = puVar6;
  } while( true );
}

