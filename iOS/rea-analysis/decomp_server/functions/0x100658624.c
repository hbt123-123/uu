// rea decompile_all
// name: FUN_100658624
// address: 0x100658624
// body: available
// range: 0x100658624-0x100658ed7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100658624(ulong param_1,ulong param_2,ulong param_3,char param_4,long param_5)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *local_c0;
  undefined *local_a0;
  ulong local_80;
  ulong local_78;
  char local_70;
  undefined *local_68;
  
  if (param_1 == 0) {
    _swift_bridgeObjectRetain(param_5);
    return param_2;
  }
  uVar7 = param_1 >> 6;
  local_80 = 0;
  local_78 = 0;
  local_70 = '\0';
  local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
  if ((param_1 & 0x3f) != 0) {
    uVar8 = 0;
    uVar15 = 0;
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    do {
      uVar12 = local_78;
      uVar10 = local_80;
      if (param_4 == '\0') {
        uVar13 = param_2;
        if (param_3 == 0) {
          if ((param_2 != 0) && (uVar15 == 0)) goto LAB_100658790;
LAB_100658774:
          if (uVar8 == 0) {
            return local_80;
          }
        }
        else if (1 < uVar15) goto LAB_100658774;
        if ((uVar15 != 0) && (uVar13 = param_3, uVar15 != 1)) {
LAB_10065878c:
          uVar13 = 0;
        }
      }
      else {
        if (param_4 == '\x01') {
          lVar11 = param_3 - param_2;
          if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e60);
            (*pcVar2)();
          }
        }
        else {
          lVar11 = *(long *)(param_5 + 0x10);
        }
        if (lVar11 <= (long)uVar15 && uVar8 == 0) {
          return local_80;
        }
        if (param_4 == '\x02') {
          if (*(ulong *)(param_5 + 0x10) <= uVar15) goto LAB_10065878c;
          uVar13 = *(ulong *)(param_5 + 0x20 + uVar15 * 8);
        }
        else {
          if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e68);
            (*pcVar2)();
          }
          if ((long)(param_3 - param_2) <= (long)uVar15) goto LAB_10065878c;
          uVar13 = param_2 + uVar15;
          if (SCARRY8(param_2,uVar15)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e84);
            (*pcVar2)();
          }
          if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e8c);
            (*pcVar2)();
          }
          if (*(ulong *)(param_5 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e94);
            (*pcVar2)();
          }
          uVar13 = *(ulong *)(param_5 + 0x20 + uVar13 * 8);
        }
      }
LAB_100658790:
      uVar14 = uVar15 + uVar7;
      if (SCARRY8(uVar15,uVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e4c);
        (*pcVar2)();
      }
      if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e50);
        (*pcVar2)();
      }
      uVar8 = uVar13 << (param_1 & 0x3f) | uVar8;
      if (local_70 == '\0') {
        uVar10 = uVar8;
        if ((uVar14 != 0) && (uVar10 = local_80, uVar12 = uVar8, uVar14 != 1)) goto LAB_1006588fc;
        local_78 = uVar12;
        local_80 = uVar10;
        local_70 = '\0';
      }
      else if (local_70 == '\x01') {
        uVar1 = local_78 - local_80;
        if (SBORROW8(local_78,local_80)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e64);
          (*pcVar2)();
        }
        if ((long)uVar14 < (long)uVar1) {
          local_80 = 0;
          local_78 = 0;
          local_70 = '\x02';
          if ((long)uVar12 < (long)uVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e7c);
            (*pcVar2)();
          }
          if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e80);
            (*pcVar2)();
          }
          uVar9 = *(ulong *)(puVar5 + 0x10);
          if ((uVar9 < uVar10) || ((long)uVar9 < (long)uVar12)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e88);
            (*pcVar2)();
          }
          if (uVar9 != uVar1) {
            local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
            if (uVar12 != uVar10) {
              local_c0 = &DAT_100ab7e10;
              FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
              _swift_allocObject();
              puVar4 = local_c0;
              _malloc_size();
              puVar6 = puVar4 + -0x19;
              if (0x1f < (long)puVar4) {
                puVar6 = puVar4 + -0x20;
              }
              *(ulong *)(local_c0 + 0x10) = uVar1;
              *(long *)(local_c0 + 0x18) = ((long)puVar6 >> 3) << 1;
              _memcpy(local_c0 + 0x20,puVar5 + uVar10 * 8 + 0x20,uVar1 * 8);
            }
            _swift_bridgeObjectRelease(puVar5);
            puVar5 = local_c0;
          }
          if (*(ulong *)(puVar5 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e90);
            (*pcVar2)();
          }
          puVar6 = puVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar6 & 1) == 0) {
            FUN_1006541a4();
          }
          uVar10 = *(ulong *)(puVar5 + 0x10);
          if (uVar10 <= uVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e98);
            (*pcVar2)();
          }
          *(ulong *)(puVar5 + uVar14 * 8 + 0x20) = uVar8;
          local_68 = puVar5;
          if (((uVar8 == 0) && (uVar14 == uVar10 - 1)) &&
             (*(long *)(puVar5 + uVar14 * 8 + 0x20) == 0)) {
            while ((*(long *)(puVar5 + 0x10) != 0 &&
                   (lVar11 = *(long *)(puVar5 + 0x10) + -1,
                   *(long *)(puVar5 + lVar11 * 8 + 0x20) == 0))) {
              *(long *)(puVar5 + 0x10) = lVar11;
            }
          }
        }
        else {
LAB_1006588fc:
          if (uVar8 != 0) {
            if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e6c);
              (*pcVar2)();
            }
            FUN_100646ccc(uVar14 + 1);
            lVar11 = uVar14 - *(ulong *)(local_68 + 0x10);
            if (uVar14 < *(ulong *)(local_68 + 0x10)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e70);
              (*pcVar2)();
            }
            if (lVar11 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e74);
              (*pcVar2)();
            }
            FUN_10062872c(&local_80,lVar11,0);
            puVar5 = local_68;
            puVar6 = local_68;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar4 = puVar5;
            if (((ulong)puVar6 & 1) == 0) {
              puVar4 = (undefined *)0x0;
              FUN_10062958c(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
            }
            uVar10 = *(ulong *)(puVar4 + 0x10);
            puVar5 = puVar4;
            if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar10) {
              puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
              FUN_10062958c(puVar5,uVar10 + 1,1,puVar4);
            }
            *(ulong *)(puVar5 + 0x10) = uVar10 + 1;
            *(ulong *)(puVar5 + uVar10 * 8 + 0x20) = uVar8;
            local_68 = puVar5;
          }
        }
      }
      else {
        if (*(ulong *)(puVar5 + 0x10) <= uVar14) goto LAB_1006588fc;
        puVar6 = puVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar6 & 1) == 0) {
          FUN_1006541a4();
        }
        uVar10 = *(ulong *)(puVar5 + 0x10);
        if (uVar10 <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e78);
          (*pcVar2)();
        }
        *(ulong *)(puVar5 + uVar14 * 8 + 0x20) = uVar8;
        local_68 = puVar5;
        if (((uVar8 == 0) && (uVar14 == uVar10 - 1)) && (*(long *)(puVar5 + uVar14 * 8 + 0x20) == 0)
           ) {
          while ((*(long *)(puVar5 + 0x10) != 0 &&
                 (lVar11 = *(long *)(puVar5 + 0x10) + -1, *(long *)(puVar5 + lVar11 * 8 + 0x20) == 0
                 ))) {
            *(long *)(puVar5 + 0x10) = lVar11;
          }
        }
      }
      uVar8 = uVar13 >> (-(int)param_1 & 0x3fU);
      bVar3 = SCARRY8(uVar15,1);
      uVar15 = uVar15 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e54);
        (*pcVar2)();
      }
    } while( true );
  }
  if (param_4 == '\0') {
    if (param_3 != 0) {
      uVar15 = 2;
      goto LAB_100658a98;
    }
    uVar15 = (ulong)(param_2 != 0);
  }
  else if (param_4 == '\x01') {
    uVar15 = param_3 - param_2;
    if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100658ed8);
      (*pcVar2)();
    }
    if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100658ed4);
      (*pcVar2)();
    }
  }
  else {
    uVar15 = *(ulong *)(param_5 + 0x10);
  }
  if (uVar15 == 0) {
    return 0;
  }
LAB_100658a98:
  uVar8 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  do {
    uVar13 = local_78;
    uVar12 = local_80;
    uVar10 = uVar8 + uVar7;
    if (SCARRY8(uVar8,uVar7)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e58);
      (*pcVar2)();
    }
    if (param_4 == '\0') {
      uVar14 = param_2;
      if ((uVar8 != 0) && (uVar14 = param_3, uVar8 != 1)) goto LAB_100658b4c;
    }
    else if (param_4 == '\x01') {
      if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e9c);
        (*pcVar2)();
      }
      if ((long)uVar8 < (long)(param_3 - param_2)) {
        uVar14 = param_2 + uVar8;
        if (SCARRY8(param_2,uVar8)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100658eb0);
          (*pcVar2)();
        }
        if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100658eb8);
          (*pcVar2)();
        }
        if (*(ulong *)(param_5 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100658ec0);
          (*pcVar2)();
        }
        uVar14 = *(ulong *)(param_5 + 0x20 + uVar14 * 8);
      }
      else {
LAB_100658b4c:
        uVar14 = 0;
      }
    }
    else {
      if (*(ulong *)(param_5 + 0x10) <= uVar8) goto LAB_100658b4c;
      uVar14 = *(ulong *)(param_5 + 0x20 + uVar8 * 8);
    }
    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100658e5c);
      (*pcVar2)();
    }
    if (local_70 == '\0') {
      uVar12 = uVar14;
      if ((uVar10 != 0) && (uVar12 = local_80, uVar13 = uVar14, uVar10 != 1)) goto LAB_100658ca8;
      local_78 = uVar13;
      local_80 = uVar12;
      local_70 = '\0';
    }
    else if (local_70 == '\x01') {
      uVar1 = local_78 - local_80;
      if (SBORROW8(local_78,local_80)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100658ea0);
        (*pcVar2)();
      }
      if ((long)uVar10 < (long)uVar1) {
        local_80 = 0;
        local_78 = 0;
        local_70 = '\x02';
        if ((long)uVar13 < (long)uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100658ebc);
          (*pcVar2)();
        }
        if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100658ec4);
          (*pcVar2)();
        }
        uVar9 = *(ulong *)(puVar5 + 0x10);
        if ((uVar9 < uVar12) || ((long)uVar9 < (long)uVar13)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100658ec8);
          (*pcVar2)();
        }
        if (uVar9 != uVar1) {
          local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
          if (uVar13 != uVar12) {
            local_a0 = &DAT_100ab7e10;
            FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
            _swift_allocObject();
            puVar4 = local_a0;
            _malloc_size();
            puVar6 = puVar4 + -0x19;
            if (0x1f < (long)puVar4) {
              puVar6 = puVar4 + -0x20;
            }
            *(ulong *)(local_a0 + 0x10) = uVar1;
            *(long *)(local_a0 + 0x18) = ((long)puVar6 >> 3) << 1;
            _memcpy(local_a0 + 0x20,puVar5 + uVar12 * 8 + 0x20,uVar1 * 8);
          }
          _swift_bridgeObjectRelease(puVar5);
          puVar5 = local_a0;
        }
        if (*(ulong *)(puVar5 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100658ecc);
          (*pcVar2)();
        }
        puVar6 = puVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar6 & 1) == 0) {
          FUN_1006541a4();
        }
        uVar12 = *(ulong *)(puVar5 + 0x10);
        if (uVar12 <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100658ed0);
          (*pcVar2)();
        }
        *(ulong *)(puVar5 + uVar10 * 8 + 0x20) = uVar14;
        local_68 = puVar5;
        if (((uVar14 == 0) && (uVar10 == uVar12 - 1)) &&
           (*(long *)(puVar5 + uVar10 * 8 + 0x20) == 0)) {
          while ((*(long *)(puVar5 + 0x10) != 0 &&
                 (lVar11 = *(long *)(puVar5 + 0x10) + -1, *(long *)(puVar5 + lVar11 * 8 + 0x20) == 0
                 ))) {
            *(long *)(puVar5 + 0x10) = lVar11;
          }
        }
      }
      else {
LAB_100658ca8:
        if (uVar14 != 0) {
          if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100658ea4);
            (*pcVar2)();
          }
          FUN_100646ccc(uVar10 + 1);
          lVar11 = uVar10 - *(ulong *)(local_68 + 0x10);
          if (uVar10 < *(ulong *)(local_68 + 0x10)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100658ea8);
            (*pcVar2)();
          }
          if (lVar11 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100658eac);
            (*pcVar2)();
          }
          FUN_10062872c(&local_80,lVar11,0);
          puVar5 = local_68;
          puVar6 = local_68;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar4 = puVar5;
          if (((ulong)puVar6 & 1) == 0) {
            puVar4 = (undefined *)0x0;
            FUN_10062958c(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
          }
          uVar10 = *(ulong *)(puVar4 + 0x10);
          puVar5 = puVar4;
          if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar10) {
            puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
            FUN_10062958c(puVar5,uVar10 + 1,1,puVar4);
          }
          *(ulong *)(puVar5 + 0x10) = uVar10 + 1;
          *(ulong *)(puVar5 + uVar10 * 8 + 0x20) = uVar14;
          local_68 = puVar5;
        }
      }
    }
    else {
      if (*(ulong *)(puVar5 + 0x10) <= uVar10) goto LAB_100658ca8;
      puVar6 = puVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar6 & 1) == 0) {
        FUN_1006541a4();
      }
      uVar12 = *(ulong *)(puVar5 + 0x10);
      if (uVar12 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100658eb4);
        (*pcVar2)();
      }
      *(ulong *)(puVar5 + uVar10 * 8 + 0x20) = uVar14;
      local_68 = puVar5;
      if (((uVar14 == 0) && (uVar10 == uVar12 - 1)) && (*(long *)(puVar5 + uVar10 * 8 + 0x20) == 0))
      {
        while ((*(long *)(puVar5 + 0x10) != 0 &&
               (lVar11 = *(long *)(puVar5 + 0x10) + -1, *(long *)(puVar5 + lVar11 * 8 + 0x20) == 0))
              ) {
          *(long *)(puVar5 + 0x10) = lVar11;
        }
      }
    }
    uVar8 = uVar8 + 1;
    if (uVar8 == uVar15) {
      return local_80;
    }
  } while( true );
}

