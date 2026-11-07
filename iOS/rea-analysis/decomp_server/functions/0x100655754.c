// rea decompile_all
// name: FUN_100655754
// address: 0x100655754
// body: available
// range: 0x100655754-0x100655b7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100655754(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *local_98;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  char local_70;
  undefined *local_68;
  
  local_80 = 0;
  local_78 = 0;
  local_70 = '\0';
  local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (SCARRY8((long)param_1,0x40)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100655b7c);
    (*pcVar3)();
  }
  puVar4 = param_1;
  if (0xc0 < (long)(param_1 + 0x40)) {
    puVar4 = (undefined *)((ulong)(param_1 + 0x3f) >> 6);
    FUN_100646ccc(puVar4);
  }
  if ((long)param_1 < 0x40) {
    if ((long)param_1 < 1) {
      return local_80;
    }
    uVar13 = 0;
    puVar6 = puVar4;
  }
  else {
    FUN_100655f14();
    puVar5 = puVar4;
    FUN_100655f54();
    uVar13 = 0;
    do {
      puVar14 = param_1;
      puVar6 = param_3;
      __sSGsE4nextqd__ys17FixedWidthIntegerRd__SURd__lF
                (&local_88,param_3,PTR___sSuN_100995a50,param_4,puVar4,puVar5);
      puVar7 = local_68;
      uVar2 = local_78;
      uVar10 = local_80;
      uVar11 = local_88;
      if (local_70 == '\0') {
        if (uVar13 == 0) {
          local_80 = local_88;
          uVar11 = local_78;
        }
        else if (uVar13 != 1) goto LAB_100655950;
        local_78 = uVar11;
        local_70 = '\0';
      }
      else if (local_70 == '\x01') {
        uVar1 = local_78 - local_80;
        if (SBORROW8(local_78,local_80)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100655b58);
          (*pcVar3)();
        }
        if ((long)uVar13 < (long)uVar1) {
          local_80 = 0;
          local_78 = 0;
          local_70 = '\x02';
          if ((long)uVar2 < (long)uVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100655b68);
            (*pcVar3)();
          }
          if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100655b6c);
            (*pcVar3)();
          }
          uVar9 = *(ulong *)(local_68 + 0x10);
          if (uVar9 < uVar10 || (long)uVar9 < (long)uVar2) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100655b70);
            (*pcVar3)();
          }
          local_98 = local_68;
          if (uVar9 != uVar1) {
            local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
            if (uVar2 != uVar10) {
              if (0 < (long)uVar1) {
                local_98 = &DAT_100ab7e10;
                FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
                _swift_allocObject();
                puVar8 = local_98;
                _malloc_size();
                puVar6 = puVar8 + -0x19;
                if (0x1f < (long)puVar8) {
                  puVar6 = puVar8 + -0x20;
                }
                *(ulong *)(local_98 + 0x10) = uVar1;
                *(long *)(local_98 + 0x18) = ((long)puVar6 >> 3) << 1;
              }
              _memcpy(local_98 + 0x20,puVar7 + uVar10 * 8 + 0x20,uVar1 * 8);
            }
            _swift_bridgeObjectRelease(puVar7);
          }
          if (*(ulong *)(local_98 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100655b74);
            (*pcVar3)();
          }
          puVar6 = local_98;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar6 & 1) == 0) {
            FUN_1006541a4();
            puVar6 = local_98;
          }
          uVar10 = *(ulong *)(local_98 + 0x10);
          if (uVar10 <= uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100655b78);
            (*pcVar3)();
          }
          *(ulong *)(local_98 + uVar13 * 8 + 0x20) = uVar11;
          local_68 = local_98;
          if (((uVar11 == 0) && (uVar13 == uVar10 - 1)) &&
             (*(long *)(local_98 + uVar13 * 8 + 0x20) == 0)) {
            while ((*(long *)(local_98 + 0x10) != 0 &&
                   (lVar12 = *(long *)(local_98 + 0x10) + -1,
                   *(long *)(local_98 + lVar12 * 8 + 0x20) == 0))) {
              *(long *)(local_98 + 0x10) = lVar12;
            }
          }
        }
        else {
LAB_100655950:
          if (local_88 != 0) {
            FUN_100646ccc(uVar13 + 1);
            lVar12 = uVar13 - *(ulong *)(local_68 + 0x10);
            if (uVar13 < *(ulong *)(local_68 + 0x10)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100655b5c);
              (*pcVar3)();
            }
            if (lVar12 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100655b60);
              (*pcVar3)();
            }
            FUN_10062872c(&local_80,lVar12,0);
            puVar7 = local_68;
            puVar6 = local_68;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)puVar6 & 1) == 0) {
              puVar6 = (undefined *)0x0;
              FUN_10062958c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
              puVar7 = puVar6;
            }
            uVar10 = *(ulong *)(puVar7 + 0x10);
            if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar10) {
              puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
              FUN_10062958c(puVar6,uVar10 + 1,1,puVar7);
              puVar7 = puVar6;
            }
            *(ulong *)(puVar7 + 0x10) = uVar10 + 1;
            *(ulong *)(puVar7 + uVar10 * 8 + 0x20) = uVar11;
            local_68 = puVar7;
          }
        }
      }
      else {
        if (*(ulong *)(local_68 + 0x10) <= uVar13) goto LAB_100655950;
        puVar6 = local_68;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar6 & 1) == 0) {
          FUN_1006541a4();
          puVar6 = puVar7;
        }
        uVar10 = *(ulong *)(puVar7 + 0x10);
        if (uVar10 <= uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100655b64);
          (*pcVar3)();
        }
        *(ulong *)(puVar7 + uVar13 * 8 + 0x20) = uVar11;
        local_68 = puVar7;
        if ((uVar11 == 0) && (uVar13 == uVar10 - 1)) {
          *(ulong *)(puVar7 + 0x10) = uVar13;
          uVar11 = uVar13;
          while ((uVar11 != 0 && (*(long *)(puVar7 + uVar11 * 8 + 0x18) == 0))) {
            uVar11 = uVar11 - 1;
            *(ulong *)(puVar7 + 0x10) = uVar11;
          }
        }
      }
      uVar13 = uVar13 + 1;
      param_1 = puVar14 + -0x40;
    } while (0x7f < (long)puVar14);
    if ((long)puVar14 < 0x41) {
      return local_80;
    }
  }
  FUN_100655f14();
  puVar4 = puVar6;
  FUN_100655f54();
  __sSGsE4nextqd__ys17FixedWidthIntegerRd__SURd__lF
            (&local_88,param_3,PTR___sSuN_100995a50,param_4,puVar6,puVar4);
  FUN_100644614(local_88 & (-1L << ((ulong)param_1 & 0x3f) ^ 0xffffffffffffffffU),uVar13);
  return local_80;
}

