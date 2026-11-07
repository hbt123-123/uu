// rea decompile_all
// name: FUN_10064c73c
// address: 0x10064c73c
// body: available
// range: 0x10064c73c-0x10064cb6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10064c73c(byte *param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_80;
  ulong local_78;
  char local_70;
  undefined *local_68;
  
  local_80 = 0;
  local_78 = 0;
  local_70 = '\0';
  local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
  if ((param_1 != (byte *)0x0) && (uVar7 = (long)param_2 - (long)param_1, 0 < (long)uVar7)) {
    uVar12 = uVar7 >> 3;
    if ((uVar7 & 7) == 0) {
      if (param_2 == param_1) {
        return 0;
      }
      lVar8 = 0;
      uVar12 = uVar12 - 1;
    }
    else {
      if (param_2 == param_1) {
        return 0;
      }
      lVar8 = 8 - (uVar7 & 7);
    }
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
    do {
      uVar2 = local_78;
      uVar7 = local_80;
      uVar13 = 0;
      lVar8 = lVar8 + -7;
      while( true ) {
        pbVar9 = param_1 + 1;
        uVar13 = (ulong)*param_1 | uVar13 << 8;
        if (lVar8 == 0) break;
        lVar8 = lVar8 + 1;
        param_1 = pbVar9;
        if (pbVar9 == param_2) {
          return local_80;
        }
      }
      if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10064cb4c);
        (*pcVar3)();
      }
      if (local_70 == '\0') {
        uVar7 = uVar13;
        if ((uVar12 != 0) && (uVar7 = local_80, uVar2 = uVar13, uVar12 != 1)) goto LAB_10064c95c;
        local_78 = uVar2;
        local_80 = uVar7;
        local_70 = '\0';
      }
      else if (local_70 == '\x01') {
        uVar1 = local_78 - local_80;
        if (SBORROW8(local_78,local_80)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10064cb50);
          (*pcVar3)();
        }
        if ((long)uVar12 < (long)uVar1) {
          local_80 = 0;
          local_78 = 0;
          local_70 = '\x02';
          if ((long)uVar2 < (long)uVar7) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10064cb60);
            (*pcVar3)();
          }
          if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10064cb64);
            (*pcVar3)();
          }
          uVar10 = *(ulong *)(puVar5 + 0x10);
          if ((uVar10 < uVar7) || ((long)uVar10 < (long)uVar2)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10064cb68);
            (*pcVar3)();
          }
          puVar4 = puVar5;
          if (uVar10 != uVar1) {
            puVar4 = puVar11;
            if (uVar2 != uVar7) {
              puVar4 = &DAT_100ab7e10;
              FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
              _swift_allocObject();
              puVar6 = puVar4;
              _malloc_size();
              puVar11 = puVar6 + -0x19;
              if (0x1f < (long)puVar6) {
                puVar11 = puVar6 + -0x20;
              }
              *(ulong *)(puVar4 + 0x10) = uVar1;
              *(long *)(puVar4 + 0x18) = ((long)puVar11 >> 3) << 1;
              _memcpy(puVar4 + 0x20,puVar5 + uVar7 * 8 + 0x20,uVar1 * 8);
            }
            _swift_bridgeObjectRelease(puVar5);
            puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
          }
          if (*(ulong *)(puVar4 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10064cb6c);
            (*pcVar3)();
          }
          puVar6 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar5 = puVar4;
          if (((ulong)puVar6 & 1) == 0) {
            FUN_1006541a4();
            puVar5 = puVar4;
          }
          uVar7 = *(ulong *)(puVar5 + 0x10);
          if (uVar7 <= uVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10064cb70);
            (*pcVar3)();
          }
          *(ulong *)(puVar5 + uVar12 * 8 + 0x20) = uVar13;
          local_68 = puVar5;
          if (((uVar13 == 0) && (uVar12 == uVar7 - 1)) &&
             (*(long *)(puVar5 + uVar12 * 8 + 0x20) == 0)) {
            while ((*(long *)(puVar5 + 0x10) != 0 &&
                   (lVar8 = *(long *)(puVar5 + 0x10) + -1, *(long *)(puVar5 + lVar8 * 8 + 0x20) == 0
                   ))) {
              *(long *)(puVar5 + 0x10) = lVar8;
            }
          }
        }
        else {
LAB_10064c95c:
          if (uVar13 != 0) {
            FUN_100646ccc(uVar12 + 1);
            lVar8 = uVar12 - *(ulong *)(local_68 + 0x10);
            if (uVar12 < *(ulong *)(local_68 + 0x10)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10064cb54);
              (*pcVar3)();
            }
            if (lVar8 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10064cb58);
              (*pcVar3)();
            }
            FUN_10062872c(lVar8,0);
            puVar4 = local_68;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar5 = local_68;
            if (((ulong)puVar4 & 1) == 0) {
              puVar5 = (undefined *)0x0;
              FUN_10062958c(0,*(long *)(local_68 + 0x10) + 1,1,local_68);
            }
            uVar7 = *(ulong *)(puVar5 + 0x10);
            if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar7) {
              puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
              FUN_10062958c(puVar5,uVar7 + 1,1);
            }
            *(ulong *)(puVar5 + 0x10) = uVar7 + 1;
            *(ulong *)(puVar5 + uVar7 * 8 + 0x20) = uVar13;
            local_68 = puVar5;
          }
        }
      }
      else {
        if (*(ulong *)(puVar5 + 0x10) <= uVar12) goto LAB_10064c95c;
        puVar4 = puVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar4 & 1) == 0) {
          FUN_1006541a4();
        }
        uVar7 = *(ulong *)(puVar5 + 0x10);
        if (uVar7 <= uVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10064cb5c);
          (*pcVar3)();
        }
        *(ulong *)(puVar5 + uVar12 * 8 + 0x20) = uVar13;
        local_68 = puVar5;
        if (((uVar13 == 0) && (uVar12 == uVar7 - 1)) && (*(long *)(puVar5 + uVar12 * 8 + 0x20) == 0)
           ) {
          while ((*(long *)(puVar5 + 0x10) != 0 &&
                 (lVar8 = *(long *)(puVar5 + 0x10) + -1, *(long *)(puVar5 + lVar8 * 8 + 0x20) == 0))
                ) {
            *(long *)(puVar5 + 0x10) = lVar8;
          }
        }
      }
      lVar8 = 0;
      param_1 = param_1 + 1;
      uVar12 = uVar12 - 1;
    } while (param_1 != param_2);
  }
  return local_80;
}

