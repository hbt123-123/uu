// rea decompile_all
// name: FUN_100655374
// address: 0x100655374
// body: available
// range: 0x100655374-0x100655753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100655374(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  char local_70;
  undefined *local_68;
  
  local_80 = 0;
  local_78 = 0;
  local_70 = '\0';
  local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (SCARRY8(param_1,0x40)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100655754);
    (*pcVar3)();
  }
  if (0xc0 < (long)(param_1 + 0x40)) {
    FUN_100646ccc(param_1 + 0x3f >> 6);
  }
  if ((long)param_1 < 0x40) {
    if ((long)param_1 < 1) {
      return local_80;
    }
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    do {
      uVar12 = param_1;
      local_88 = 0;
      _swift_stdlib_random(&local_88,8);
      puVar6 = local_68;
      uVar2 = local_78;
      uVar8 = local_80;
      uVar9 = local_88;
      if (local_70 == '\0') {
        if (uVar11 == 0) {
          local_80 = local_88;
          uVar9 = local_78;
        }
        else if (uVar11 != 1) goto LAB_100655554;
        local_78 = uVar9;
        local_70 = '\0';
      }
      else if (local_70 == '\x01') {
        uVar1 = local_78 - local_80;
        if (SBORROW8(local_78,local_80)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100655730);
          (*pcVar3)();
        }
        if ((long)uVar11 < (long)uVar1) {
          local_80 = 0;
          local_78 = 0;
          local_70 = '\x02';
          if ((long)uVar2 < (long)uVar8) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100655740);
            (*pcVar3)();
          }
          if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100655744);
            (*pcVar3)();
          }
          uVar7 = *(ulong *)(local_68 + 0x10);
          if (uVar7 < uVar8 || (long)uVar7 < (long)uVar2) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100655748);
            (*pcVar3)();
          }
          local_90 = local_68;
          if (uVar7 != uVar1) {
            local_90 = PTR___swiftEmptyArrayStorage_100995ea0;
            if (uVar2 != uVar8) {
              if (0 < (long)uVar1) {
                local_90 = &DAT_100ab7e10;
                FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
                _swift_allocObject();
                puVar5 = local_90;
                _malloc_size();
                puVar4 = puVar5 + -0x19;
                if (0x1f < (long)puVar5) {
                  puVar4 = puVar5 + -0x20;
                }
                *(ulong *)(local_90 + 0x10) = uVar1;
                *(long *)(local_90 + 0x18) = ((long)puVar4 >> 3) << 1;
              }
              _memcpy(local_90 + 0x20,puVar6 + uVar8 * 8 + 0x20,uVar1 * 8);
            }
            _swift_bridgeObjectRelease(puVar6);
          }
          if (*(ulong *)(local_90 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10065574c);
            (*pcVar3)();
          }
          puVar6 = local_90;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar6 & 1) == 0) {
            FUN_1006541a4();
          }
          uVar8 = *(ulong *)(local_90 + 0x10);
          if (uVar8 <= uVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100655750);
            (*pcVar3)();
          }
          *(ulong *)(local_90 + uVar11 * 8 + 0x20) = uVar9;
          local_68 = local_90;
          if (((uVar9 == 0) && (uVar11 == uVar8 - 1)) &&
             (*(long *)(local_90 + uVar11 * 8 + 0x20) == 0)) {
            while ((*(long *)(local_90 + 0x10) != 0 &&
                   (lVar10 = *(long *)(local_90 + 0x10) + -1,
                   *(long *)(local_90 + lVar10 * 8 + 0x20) == 0))) {
              *(long *)(local_90 + 0x10) = lVar10;
            }
          }
        }
        else {
LAB_100655554:
          if (local_88 != 0) {
            FUN_100646ccc(uVar11 + 1);
            lVar10 = uVar11 - *(ulong *)(local_68 + 0x10);
            if (uVar11 < *(ulong *)(local_68 + 0x10)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100655734);
              (*pcVar3)();
            }
            if (lVar10 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100655738);
              (*pcVar3)();
            }
            FUN_10062872c(lVar10,0);
            puVar6 = local_68;
            puVar4 = local_68;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar5 = puVar6;
            if (((ulong)puVar4 & 1) == 0) {
              puVar5 = (undefined *)0x0;
              FUN_10062958c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
            }
            uVar8 = *(ulong *)(puVar5 + 0x10);
            puVar6 = puVar5;
            if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar8) {
              puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
              FUN_10062958c(puVar6,uVar8 + 1,1,puVar5);
            }
            *(ulong *)(puVar6 + 0x10) = uVar8 + 1;
            *(ulong *)(puVar6 + uVar8 * 8 + 0x20) = uVar9;
            local_68 = puVar6;
          }
        }
      }
      else {
        if (*(ulong *)(local_68 + 0x10) <= uVar11) goto LAB_100655554;
        puVar4 = local_68;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar4 & 1) == 0) {
          FUN_1006541a4();
        }
        uVar8 = *(ulong *)(puVar6 + 0x10);
        if (uVar8 <= uVar11) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10065573c);
          (*pcVar3)();
        }
        *(ulong *)(puVar6 + uVar11 * 8 + 0x20) = uVar9;
        local_68 = puVar6;
        if ((uVar9 == 0) && (uVar11 == uVar8 - 1)) {
          *(ulong *)(puVar6 + 0x10) = uVar11;
          uVar9 = uVar11;
          while ((uVar9 != 0 && (*(long *)(puVar6 + uVar9 * 8 + 0x18) == 0))) {
            uVar9 = uVar9 - 1;
            *(ulong *)(puVar6 + 0x10) = uVar9;
          }
        }
      }
      uVar11 = uVar11 + 1;
      param_1 = uVar12 - 0x40;
    } while (0x7f < (long)uVar12);
    if ((long)uVar12 < 0x41) {
      return local_80;
    }
  }
  local_88 = 0;
  _swift_stdlib_random(&local_88,8);
  FUN_100644614(local_88 & (-1L << (param_1 & 0x3f) ^ 0xffffffffffffffffU),uVar11);
  return local_80;
}

