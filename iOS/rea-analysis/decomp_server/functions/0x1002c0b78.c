// rea decompile_all
// name: FUN_1002c0b78
// address: 0x1002c0b78
// body: available
// range: 0x1002c0b78-0x1002c0f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_1002c0b78(long param_1,ulong param_2,code *param_3,undefined8 param_4,ulong param_5,
             ulong param_6)

{
  long *plVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  long unaff_x21;
  ulong uVar12;
  ulong uVar13;
  undefined *local_80;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002c0efc);
    (*pcVar3)();
  }
  uVar10 = param_6 >> 0x38 & 0xf;
  uVar2 = (uint)(param_6 >> 0x20);
  if (param_1 != 0) {
    uVar13 = param_5 & 0xffffffffffff;
    if ((param_6 & 0x2000000000000000) != 0) {
      uVar13 = uVar10;
    }
    if (uVar13 != 0) {
      uVar10 = 0xb;
      if ((uVar2 >> 0x1c & (uint)((param_5 & 0x800000000000000) == 0)) == 0) {
        uVar10 = 7;
      }
      uVar10 = uVar10 | uVar13 << 0x10;
      uVar13 = uVar13 * 4;
      puVar11 = (undefined *)0xf;
      local_80 = PTR___swiftEmptyArrayStorage_100995ea0;
LAB_1002c0c00:
      uVar12 = (ulong)puVar11 >> 0xe;
      puVar7 = puVar11;
      puVar6 = puVar11;
      if (uVar12 != uVar13) {
        do {
          puVar11 = puVar7;
          uVar8 = param_5;
          __sSSySJSS5IndexVcig(puVar11,param_5,param_6);
          uVar4 = 0;
          (*param_3)();
          if (unaff_x21 != 0) {
            _swift_bridgeObjectRelease(local_80);
            _swift_bridgeObjectRelease(param_6);
            _swift_bridgeObjectRelease(uVar8);
            return puVar11;
          }
          _swift_bridgeObjectRelease(uVar8);
          if ((uVar4 & 1) == 0) {
            __sSS5index5afterSS5IndexVAD_tF(puVar11,param_5,param_6);
            puVar7 = puVar11;
            puVar11 = puVar6;
          }
          else {
            if (((ulong)puVar6 >> 0xe != uVar12) || ((param_2 & 1) == 0)) goto LAB_1002c0cbc;
            __sSS5index5afterSS5IndexVAD_tF(puVar11,param_5,param_6);
            puVar7 = puVar11;
          }
          uVar12 = (ulong)puVar7 >> 0xe;
          puVar6 = puVar11;
          if (uVar12 == uVar13) break;
        } while( true );
      }
      goto LAB_1002c0e48;
    }
  }
  uVar13 = param_5 & 0xffffffffffff;
  if ((param_6 & 0x2000000000000000) != 0) {
    uVar13 = uVar10;
  }
  if ((uVar13 == 0) && ((param_2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_6);
    return PTR___swiftEmptyArrayStorage_100995ea0;
  }
  uVar10 = 0xb;
  if ((uVar2 >> 0x1c & (uint)((param_5 & 0x800000000000000) == 0)) == 0) {
    uVar10 = 7;
  }
  uVar10 = uVar10 | uVar13 << 0x10;
  uVar5 = 0xf;
  uVar12 = param_6;
  __sSSySsSnySS5IndexVGcig();
  puVar11 = (undefined *)0x0;
  FUN_100296440(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
  uVar13 = *(ulong *)(puVar11 + 0x10);
  local_80 = puVar11;
  if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar13) {
    local_80 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
    FUN_100296440(local_80,uVar13 + 1,1,puVar11);
  }
  *(ulong *)(local_80 + 0x10) = uVar13 + 1;
  *(undefined8 *)(local_80 + uVar13 * 0x20 + 0x20) = uVar5;
  *(ulong *)(local_80 + uVar13 * 0x20 + 0x28) = uVar10;
  *(ulong *)(local_80 + uVar13 * 0x20 + 0x30) = param_5;
  *(ulong *)(local_80 + uVar13 * 0x20 + 0x38) = uVar12;
LAB_1002c0e5c:
  _swift_bridgeObjectRelease(param_6);
  return local_80;
LAB_1002c0cbc:
  if (uVar12 < (ulong)puVar6 >> 0xe) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002c0f64);
    (*pcVar3)();
  }
  puVar9 = puVar11;
  uVar12 = param_5;
  uVar4 = param_6;
  __sSSySsSnySS5IndexVGcig();
  puVar7 = local_80;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar7 & 1) == 0) {
    plVar1 = (long *)(local_80 + 0x10);
    local_80 = (undefined *)0x0;
    FUN_100296440(0,*plVar1 + 1,1);
  }
  uVar8 = *(ulong *)(local_80 + 0x10);
  if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar8) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(local_80 + 0x18));
    FUN_100296440(puVar7,uVar8 + 1,1,local_80);
    local_80 = puVar7;
  }
  *(ulong *)(local_80 + 0x10) = uVar8 + 1;
  *(undefined **)(local_80 + uVar8 * 0x20 + 0x20) = puVar6;
  *(undefined **)(local_80 + uVar8 * 0x20 + 0x28) = puVar9;
  *(ulong *)(local_80 + uVar8 * 0x20 + 0x30) = uVar12;
  *(ulong *)(local_80 + uVar8 * 0x20 + 0x38) = uVar4;
  __sSS5index5afterSS5IndexVAD_tF(puVar11,param_5,param_6);
  if (*(long *)(local_80 + 0x10) == param_1) goto LAB_1002c0e48;
  goto LAB_1002c0c00;
LAB_1002c0e48:
  if (((ulong)puVar11 >> 0xe != uVar13) || ((param_2 & 1) == 0)) {
    if ((ulong)puVar11 >> 0xe <= uVar13) {
      uVar13 = param_6;
      __sSSySsSnySS5IndexVGcig();
      _swift_bridgeObjectRelease(param_6);
      puVar7 = local_80;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar6 = local_80;
      if (((ulong)puVar7 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_100296440(0,*(long *)(local_80 + 0x10) + 1,1,local_80);
      }
      uVar12 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar12) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_100296440(puVar7,uVar12 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar12 + 1;
      *(undefined **)(puVar7 + uVar12 * 0x20 + 0x20) = puVar11;
      *(ulong *)(puVar7 + uVar12 * 0x20 + 0x28) = uVar10;
      *(ulong *)(puVar7 + uVar12 * 0x20 + 0x30) = param_5;
      *(ulong *)(puVar7 + uVar12 * 0x20 + 0x38) = uVar13;
      return puVar7;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002c0f20);
    (*pcVar3)();
  }
  goto LAB_1002c0e5c;
}

