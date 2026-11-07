// rea decompile_all
// name: FUN_100506740
// address: 0x100506740
// body: available
// range: 0x100506740-0x100506adf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100506740(undefined8 param_1,undefined1 *param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,uint param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ID IVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  size_t sVar10;
  long unaff_x21;
  long lVar11;
  undefined1 *local_68;
  undefined1 *local_58;
  
  puVar7 = param_2;
  FUN_100506ae0();
  if ((unaff_x21 == 0) && (puVar7 != (undefined1 *)0x0)) {
    if ((ulong)puVar7 >> 0x1f == 0) {
      local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar6 = puVar7;
      if ((undefined1 *)0xffffff < puVar7) {
        puVar6 = (undefined1 *)0x1000000;
      }
      puVar3 = puVar6;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (puVar6,PTR___ss5UInt8VN_100995d40);
      *(undefined1 **)(puVar3 + 0x10) = puVar6;
      _bzero(puVar3 + 0x20,(size_t)puVar6);
LAB_100506878:
      do {
        puVar6 = *(undefined1 **)(puVar3 + 0x10);
        if (puVar7 <= *(undefined1 **)(puVar3 + 0x10)) {
          puVar6 = puVar7;
        }
        puVar4 = puVar3;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar4 & 1) == 0) {
          FUN_1004fbdfc();
          if (*(long *)(puVar3 + 0x10) != 0) goto LAB_100506898;
LAB_1005069c8:
          _swift_bridgeObjectRelease();
          FUN_1004faf70();
          _swift_allocError(&DAT_1009ce0a8,local_58,0,0);
          *local_58 = 1;
          local_58 = puVar3;
LAB_100506ab4:
          _swift_willThrow();
          goto LAB_100506ac0;
        }
        if (*(long *)(puVar3 + 0x10) == 0) goto LAB_1005069c8;
LAB_100506898:
        IVar5 = _objc_msgSend((ID)param_2,"read:maxLength:",puVar3 + 0x20,puVar6);
        if (IVar5 == 0) goto LAB_1005069c8;
        if (IVar5 == 0xffffffffffffffff) {
          _swift_bridgeObjectRelease(local_58);
          puVar7 = (undefined1 *)_objc_msgSend((ID)param_2,"streamError");
          local_58 = puVar3;
          if (puVar7 == (undefined1 *)0x0) {
            FUN_1004faf70();
            _swift_allocError(&DAT_1009ce0a8,puVar7,0,0);
            *puVar7 = 0;
          }
          goto LAB_100506ab4;
        }
        sVar10 = *(size_t *)(puVar3 + 0x10);
        if ((long)IVar5 < (long)sVar10) {
          if ((long)IVar5 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100506ad4);
            (*pcVar2)();
          }
          _swift_bridgeObjectRetain(puVar3);
          FUN_1004fa408();
          puVar6 = puVar7 + -IVar5;
          bVar1 = (long)puVar7 < (long)IVar5;
          puVar7 = puVar6;
          if (puVar6 == (undefined1 *)0x0 || bVar1) break;
          goto LAB_100506878;
        }
        lVar11 = *(long *)(local_58 + 0x10);
        if (SCARRY8(lVar11,sVar10)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100506ad0);
          (*pcVar2)();
        }
        _swift_bridgeObjectRetain(puVar3);
        puVar6 = local_58;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)puVar6 == 0) ||
           (uVar9 = *(ulong *)(local_58 + 0x18) >> 1, (long)uVar9 < (long)(lVar11 + sVar10))) {
          FUN_100506f84();
          uVar9 = *(ulong *)(puVar6 + 0x18) >> 1;
          local_58 = puVar6;
          if (*(long *)(puVar3 + 0x10) != 0) goto LAB_100506970;
LAB_10050684c:
          _swift_bridgeObjectRelease(puVar3);
          puVar6 = local_58;
          if (sVar10 != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100506ad8);
            (*pcVar2)();
          }
        }
        else {
          puVar6 = local_58;
          if (*(long *)(puVar3 + 0x10) == 0) goto LAB_10050684c;
LAB_100506970:
          if ((long)(uVar9 - *(long *)(puVar6 + 0x10)) < (long)sVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100506adc);
            (*pcVar2)();
          }
          _memcpy(puVar6 + *(long *)(puVar6 + 0x10) + 0x20,puVar3 + 0x20,sVar10);
          _swift_bridgeObjectRelease(puVar3);
          if (sVar10 != 0) {
            if (SCARRY8(*(long *)(puVar6 + 0x10),sVar10)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100506ae0);
              (*pcVar2)();
            }
            *(size_t *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + sVar10;
          }
        }
        puVar4 = puVar7 + -IVar5;
        bVar1 = (long)IVar5 <= (long)puVar7;
        puVar7 = puVar4;
        local_58 = puVar6;
      } while (puVar4 != (undefined1 *)0x0 && bVar1);
      local_68 = local_58;
      puVar8 = &DAT_100aaa108;
      FUN_100004bb4(&DAT_100aaa108,&DAT_1008358d0);
      FUN_10053781c(&local_68,param_3,param_4 & 1,param_5,param_6 & 1,param_7,puVar8,param_8,
                    &PTR_PTR_1009d1680);
      _swift_bridgeObjectRelease(puVar3);
LAB_100506ac0:
      _swift_bridgeObjectRelease(local_58);
    }
    else {
      FUN_100506290();
      _swift_allocError(&DAT_1009cdf18,puVar7,0,0);
      *puVar7 = 3;
      _swift_willThrow();
    }
  }
  return;
}

