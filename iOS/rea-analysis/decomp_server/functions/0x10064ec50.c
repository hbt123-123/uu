// rea decompile_all
// name: FUN_10064ec50
// address: 0x10064ec50
// body: available
// range: 0x10064ec50-0x10064f16b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064ec50(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  char cVar7;
  undefined *puVar8;
  ulong *unaff_x20;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_b8;
  ulong uStack_b0;
  char local_a8;
  undefined *local_a0;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  undefined *local_78;
  
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  uVar4 = *param_3;
  uVar10 = param_3[1];
  cVar7 = (char)param_3[2];
  puVar9 = (undefined *)param_3[3];
  if (cVar7 == '\0') {
    if (uVar4 == 0 && uVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10064f148);
      (*pcVar3)();
    }
  }
  else if ((cVar7 != '\x01') && (*(long *)(puVar9 + 0x10) == 0)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10064eca4);
    (*pcVar3)();
  }
  uVar11 = uVar4;
  FUN_10064b1b4(uVar4,uVar10,cVar7,puVar9,1,0,0,PTR___swiftEmptyArrayStorage_100995ea0);
  if (uVar11 != 0) {
    uVar11 = *param_2;
    uVar1 = param_2[1];
    bVar2 = (byte)param_2[2];
    uVar12 = (ulong)bVar2;
    puVar8 = (undefined *)param_2[3];
    if (bVar2 == 0) {
      uVar6 = uVar11 | uVar1;
joined_r0x00010064ee5c:
      if (uVar6 == 0) {
        cVar7 = '\0';
        uVar10 = 1;
        uVar4 = 0;
        puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
        goto LAB_10064eea8;
      }
    }
    else if (bVar2 != 1) {
      uVar6 = *(ulong *)(puVar8 + 0x10);
      goto joined_r0x00010064ee5c;
    }
    if ((param_2[4] & 1) == 0) {
      uVar6 = uVar11;
      FUN_10064b1b4(uVar11,uVar1,uVar12,puVar8,1,0,0,PTR___swiftEmptyArrayStorage_100995ea0);
      local_b8 = uVar4;
      uStack_b0 = uVar10;
      local_a8 = cVar7;
      local_a0 = puVar9;
      if (uVar6 == 0) {
        uStack_88 = unaff_x20[1];
        local_90 = *unaff_x20;
        local_78 = (undefined *)unaff_x20[3];
        local_80 = unaff_x20[2];
        uVar11 = uVar4;
        FUN_10065fef8(uVar4,uVar10,cVar7,puVar9);
        FUN_100643424(param_3,&local_b8);
        FUN_100643424();
        FUN_10064fbe0(uVar4,uVar10,cVar7,puVar9,uVar11);
        FUN_10064d170();
        _swift_bridgeObjectRelease(puVar9);
        puVar5 = local_78;
        uVar4 = uStack_88;
        uVar10 = local_90;
        cVar7 = (char)local_80;
        if ((char)unaff_x20[4] != '\x01') goto LAB_10064f068;
        if ((char)local_80 == '\0') {
          if (local_90 == 0 && uStack_88 == 0) {
LAB_10064f0f8:
            FUN_1006433f0(param_3);
            goto LAB_10064ee9c;
          }
        }
        else if (((char)local_80 != '\x01') && (*(long *)(local_78 + 0x10) == 0)) {
LAB_10064f09c:
          FUN_1006433f0(param_3);
          cVar7 = '\x02';
          goto LAB_10064eea8;
        }
        uVar11 = local_90;
        FUN_10065eb84();
        _swift_bridgeObjectRelease(puVar5);
        uVar4 = uStack_b0;
        puVar5 = local_a0;
        uVar10 = local_b8;
        cVar7 = local_a8;
        if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10064f0f0);
          (*pcVar3)();
        }
        goto LAB_10064eea8;
      }
      uVar6 = uVar11;
      FUN_10064b1b4(uVar11,uVar1,uVar12,puVar8,0,0,0,PTR___swiftEmptyArrayStorage_100995ea0);
      if (uVar6 != 0xffffffffffffffff) {
        FUN_100643424(param_3,&local_b8);
        uVar6 = uVar11;
        uVar4 = uVar1;
        puVar5 = puVar8;
        FUN_10064e848();
        cVar7 = (char)uVar12;
        uVar10 = uVar6;
        if ((char)unaff_x20[4] != '\x01') goto LAB_10064f068;
        if (bVar2 == 0) {
LAB_10064f064:
          if ((uVar11 & 1) != 0) {
            if ((uVar12 & 0xff) == 0) {
              if (uVar6 == 0 && uVar4 == 0) goto LAB_10064f0f8;
            }
            else if ((((uint)uVar12 & 0xff) != 1) && (*(long *)(puVar5 + 0x10) == 0))
            goto LAB_10064f09c;
            FUN_10065eb84();
            _swift_bridgeObjectRelease(puVar5);
            uVar4 = uStack_b0;
            puVar5 = local_a0;
            uVar10 = local_b8;
            cVar7 = local_a8;
            if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10064f15c);
              (*pcVar3)();
            }
            goto LAB_10064eea8;
          }
        }
        else if (bVar2 == 1) {
          if (SBORROW8(uVar1,uVar11)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10064f158);
            (*pcVar3)();
          }
          if (0 < (long)(uVar1 - uVar11)) {
            if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10064f168);
              (*pcVar3)();
            }
            if (*(ulong *)(puVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10064f16c);
              (*pcVar3)();
            }
            puVar8 = puVar8 + uVar11 * 8;
LAB_10064f060:
            uVar11 = *(ulong *)(puVar8 + 0x20);
            goto LAB_10064f064;
          }
        }
        else if (*(long *)(puVar8 + 0x10) != 0) goto LAB_10064f060;
LAB_10064f068:
        FUN_1006433f0(param_3);
        goto LAB_10064eea8;
      }
    }
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    uVar12 = *unaff_x20;
    if ((char)unaff_x20[2] == '\0') {
      if (uVar12 == 0 && unaff_x20[1] == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10064f14c);
        (*pcVar3)();
      }
    }
    else if (((char)unaff_x20[2] != '\x01') && (*(long *)(unaff_x20[3] + 0x10) == 0)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10064ed34);
      (*pcVar3)();
    }
    FUN_10064b1b4();
    if (uVar12 == 0) {
      if ((char)unaff_x20[4] != '\x01') goto LAB_10064efe8;
      if (bVar2 == 0) {
LAB_10064efe0:
        if ((uVar11 & 1) != 0) {
          local_80 = CONCAT71(local_80._1_7_,cVar7);
          local_90 = uVar4;
          uStack_88 = uVar10;
          local_78 = puVar9;
          FUN_100643424(param_3,&local_b8);
          uVar4 = 1;
          FUN_10065eb84(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
          if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10064f150);
            (*pcVar3)();
          }
          uVar4 = uStack_88;
          puVar5 = local_78;
          uVar10 = local_90;
          cVar7 = (char)local_80;
          goto LAB_10064eea8;
        }
      }
      else if (bVar2 == 1) {
        if (SBORROW8(uVar1,uVar11)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10064f154);
          (*pcVar3)();
        }
        if (0 < (long)(uVar1 - uVar11)) {
          if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10064f160);
            (*pcVar3)();
          }
          if (*(ulong *)(puVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10064f164);
            (*pcVar3)();
          }
          puVar8 = puVar8 + uVar11 * 8;
          goto LAB_10064efdc;
        }
      }
      else if (*(long *)(puVar8 + 0x10) != 0) {
LAB_10064efdc:
        uVar11 = *(ulong *)(puVar8 + 0x20);
        goto LAB_10064efe0;
      }
LAB_10064efe8:
      uVar4 = 0;
      uVar10 = 1;
      cVar7 = '\0';
      goto LAB_10064eea8;
    }
  }
LAB_10064ee9c:
  uVar4 = 0;
  uVar10 = 0;
  cVar7 = '\0';
LAB_10064eea8:
  *param_1 = uVar10;
  param_1[1] = uVar4;
  *(char *)(param_1 + 2) = cVar7;
  param_1[3] = (ulong)puVar5;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}

