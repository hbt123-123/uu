// rea decompile_all
// name: FUN_10033a71c
// address: 0x10033a71c
// body: available
// range: 0x10033a71c-0x10033aaf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10033a71c(long param_1,ID param_2)

{
  size_t sVar1;
  code *pcVar2;
  bool bVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ID IVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ID *pIVar13;
  undefined *puVar14;
  ID self;
  
  self = *(ID *)(param_1 + 0x18);
  _objc_msgSend(self,"open");
  puVar14 = *(undefined **)(param_1 + 0x20);
LAB_10033a784:
  IVar4 = _objc_msgSend(self,"hasBytesAvailable");
  if ((int)IVar4 != 0 && puVar14 != (undefined *)0x0) {
    if ((long)puVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10033aaec);
      (*pcVar2)();
    }
    puVar6 = puVar14;
    if ((undefined *)0x3ff < puVar14) {
      puVar6 = (undefined *)0x400;
    }
    puVar5 = puVar6;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (puVar6,PTR___ss5UInt8VN_100995d40);
    *(undefined **)(puVar5 + 0x10) = puVar6;
    _bzero(puVar5 + 0x20,(size_t)puVar6);
    puVar6 = (undefined *)_objc_msgSend(self,"read:maxLength:",puVar5 + 0x20,puVar6);
    IVar4 = _objc_msgSend(self,"streamError");
    if (IVar4 != 0) {
      uVar11 = 0;
      FUN_100277ad0(0);
      pIVar13 = &DAT_100a824a8;
      FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
      _swift_allocError(uVar11,pIVar13,0,0);
      *pIVar13 = IVar4;
      uVar12 = 0;
      FUN_100278198(0);
      _swift_storeEnumTagMultiPayload(pIVar13,uVar12,0xc);
      _swift_storeEnumTagMultiPayload(pIVar13,uVar11,4);
      _swift_willThrow();
      _swift_bridgeObjectRelease(puVar5);
LAB_10033aa00:
      _objc_msgSend(self,"close");
      return;
    }
    if (0 < (long)puVar6) {
      puVar7 = puVar6;
      if (*(undefined **)(puVar5 + 0x10) != puVar6) {
        if (*(undefined **)(puVar5 + 0x10) < puVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10033aaf4);
          (*pcVar2)();
        }
        puVar7 = &DAT_100a83340;
        FUN_100004bb4(&DAT_100a83340,&DAT_10081abf0);
        _swift_allocObject();
        puVar8 = puVar7;
        _malloc_size();
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(long *)(puVar7 + 0x18) = (long)puVar8 * 2 + -0x40;
        _memcpy(puVar7 + 0x20,puVar5 + 0x20,(size_t)puVar6);
        _swift_bridgeObjectRelease(puVar5);
        puVar5 = puVar7;
        puVar7 = *(undefined **)(puVar7 + 0x10);
      }
      do {
        do {
          do {
            if (((long)puVar7 < 1) ||
               (IVar4 = _objc_msgSend(param_2,"hasSpaceAvailable"), (int)IVar4 == 0)) {
              _swift_bridgeObjectRelease(puVar5);
              bVar3 = puVar14 < puVar6;
              puVar14 = puVar14 + -(long)puVar6;
              if (bVar3) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10033aaf0);
                (*pcVar2)();
              }
              goto LAB_10033a784;
            }
            IVar4 = _objc_msgSend(param_2,"write:maxLength:",puVar5 + 0x20,puVar7);
            IVar9 = _objc_msgSend(param_2,"streamError");
            if (IVar9 != 0) {
              uVar11 = 0;
              FUN_100277ad0(0);
              pIVar13 = &DAT_100a824a8;
              FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,
                            &TargetProtocolConformanceDescriptor_100816c70);
              _swift_allocError(uVar11,pIVar13,0,0);
              *pIVar13 = IVar9;
              uVar12 = 0;
              FUN_100278198(0);
              _swift_storeEnumTagMultiPayload(pIVar13,uVar12,0xb);
              _swift_storeEnumTagMultiPayload(pIVar13,uVar11,4);
              _swift_willThrow();
              _swift_bridgeObjectRelease(puVar5);
              goto LAB_10033aa00;
            }
            bVar3 = SBORROW8((long)puVar7,IVar4);
            puVar7 = puVar7 + -IVar4;
            if (bVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10033aae0);
              (*pcVar2)();
            }
          } while ((long)puVar7 < 1);
          if (*(long *)(puVar5 + 0x10) < (long)IVar4) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10033aae4);
            (*pcVar2)();
          }
          if ((long)IVar4 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10033aae8);
            (*pcVar2)();
          }
        } while (IVar4 == 0);
        sVar1 = *(long *)(puVar5 + 0x10) - IVar4;
        puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
        if (sVar1 != 0) {
          if (0 < (long)sVar1) {
            puVar8 = &DAT_100a83340;
            FUN_100004bb4(&DAT_100a83340,&DAT_10081abf0);
            _swift_allocObject();
            puVar10 = puVar8;
            _malloc_size();
            *(size_t *)(puVar8 + 0x10) = sVar1;
            *(long *)(puVar8 + 0x18) = (long)puVar10 * 2 + -0x40;
          }
          _memcpy(puVar8 + 0x20,puVar5 + 0x20 + IVar4,sVar1);
        }
        _swift_bridgeObjectRelease(puVar5);
        puVar5 = puVar8;
      } while( true );
    }
    _swift_bridgeObjectRelease(puVar5);
  }
  _objc_msgSend(self,"close");
  return;
}

