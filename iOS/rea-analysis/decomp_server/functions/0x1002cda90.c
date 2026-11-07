// rea decompile_all
// name: FUN_1002cda90
// address: 0x1002cda90
// body: available
// range: 0x1002cda90-0x1002cdd83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002cda90(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ID IVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  code *pcVar17;
  undefined8 *local_a0;
  
  puVar7 = &DAT_100a82c30;
  local_a0 = param_1;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  uVar8 = *(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = (long)&local_a0 - uVar8;
  lVar11 = lVar13 - uVar8;
  lVar9 = lVar11 - uVar8;
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar16 = *(long *)(lVar2 + -8);
  lVar10 = lVar9 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(ulong *)(param_2 + 0x150);
  if (uVar8 >> 0x3e == 0) {
    uVar15 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar15 = uVar8 & 0xffffffffffffff8;
    if ((long)uVar8 < 0) {
      uVar15 = uVar8;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  PTR___swiftEmptyArrayStorage_100995ea0 = puVar7;
  if (uVar15 != 0) {
    uVar12 = 0;
    do {
      if ((uVar8 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x1002cdd3c);
          (*pcVar17)();
        }
        IVar3 = *(ID *)(uVar8 + uVar12 * 8 + 0x20);
      }
      else {
        IVar3 = uVar12;
        FUN_100169c28(uVar12,uVar8,&PTR__OBJC_CLASS___NSURLSessionTask_100a65a00,&DAT_100a82760);
      }
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1002cdd38);
        (*pcVar17)();
      }
      uVar14 = uVar12 + 1;
      IVar3 = _objc_msgSend(IVar3,"currentRequest");
      if (IVar3 != 0) {
        __s10Foundation10URLRequestV36_unconditionallyBridgeFromObjectiveCyACSo12NSURLRequestCSgFZ
                  (lVar13);
      }
      (**(code **)(lVar16 + 0x38))(lVar13,IVar3 == 0,1,lVar2);
      FUN_1002a5dbc(lVar13,lVar11);
      FUN_1002a5dbc(lVar11,lVar9);
      lVar4 = lVar9;
      (**(code **)(lVar16 + 0x30))(lVar9,1,lVar2);
      if ((int)lVar4 == 1) {
        FUN_100040bb4(lVar9,&DAT_100a82c30,&DAT_1008171f0);
      }
      else {
        pcVar17 = *(code **)(lVar16 + 0x20);
        (*pcVar17)(lVar10,lVar9,lVar2);
        puVar5 = puVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar6 = puVar7;
        if (((ulong)puVar5 & 1) == 0) {
          puVar6 = (undefined *)0x0;
          FUN_100296c2c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
        }
        uVar1 = *(ulong *)(puVar6 + 0x10);
        puVar7 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
          FUN_100296c2c(puVar7,uVar1 + 1,1,puVar6);
        }
        *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
        (*pcVar17)(puVar7 + *(long *)(lVar16 + 0x48) * uVar1 +
                            ((ulong)*(byte *)(lVar16 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar16 + 0x50) ^ 0xffffffffffffffff)),lVar10,lVar2);
      }
      uVar12 = uVar12 + 1;
    } while (uVar14 != uVar15);
  }
  *local_a0 = puVar7;
  return;
}

