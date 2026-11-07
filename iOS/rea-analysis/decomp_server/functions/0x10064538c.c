// rea decompile_all
// name: FUN_10064538c
// address: 0x10064538c
// body: available
// range: 0x10064538c-0x1006454cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064538c(long *param_1,long *param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined *puVar6;
  char cVar7;
  
  if (param_3 < 0) {
    bVar2 = SBORROW8(0,param_3);
    param_3 = -param_3;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006454cc);
      (*pcVar1)();
    }
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006454d0);
      (*pcVar1)();
    }
    cVar7 = (char)param_2[4];
    lVar3 = *param_2;
    uVar5 = param_2[1];
    puVar6 = (undefined *)(ulong)*(byte *)(param_2 + 2);
    FUN_100658624();
    uVar4 = (undefined1)uVar5;
    if ((uVar5 & 0xff) == 0) {
      if (param_3 != 0 || lVar3 != 0) {
        uVar4 = 0;
        goto LAB_1006454ac;
      }
    }
    else {
      if (((uint)uVar5 & 0xff) == 1) goto LAB_1006454ac;
      if (*(long *)(puVar6 + 0x10) != 0) {
        uVar4 = 2;
        goto LAB_1006454ac;
      }
    }
  }
  else {
    lVar3 = *param_2;
    uVar5 = param_2[1];
    puVar6 = (undefined *)(ulong)*(byte *)(param_2 + 2);
    FUN_10065933c();
    cVar7 = (char)param_2[4];
    uVar4 = (undefined1)uVar5;
    if (cVar7 == '\x01') {
      if ((uVar5 & 0xff) == 0) {
        if (param_3 != 0 || lVar3 != 0) goto LAB_10064548c;
LAB_100645468:
        _swift_bridgeObjectRelease(puVar6);
        lVar3 = 0;
        uVar4 = 0;
        param_3 = 1;
        puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      else if (((uint)uVar5 & 0xff) != 1) {
        if (*(long *)(puVar6 + 0x10) != 0) {
          cVar7 = '\x01';
          uVar4 = 2;
          goto LAB_1006454ac;
        }
        goto LAB_100645468;
      }
      cVar7 = '\x01';
      goto LAB_1006454ac;
    }
    if ((uVar5 & 0xff) == 0) {
LAB_10064548c:
      uVar4 = 0;
      if (param_3 == 0 && lVar3 == 0) {
        lVar3 = 0;
        param_3 = 0;
        cVar7 = '\0';
      }
      goto LAB_1006454ac;
    }
    if (((uint)uVar5 & 0xff) != 1) {
      uVar4 = 2;
      cVar7 = '\0';
      goto LAB_1006454ac;
    }
  }
  cVar7 = '\0';
LAB_1006454ac:
  *param_1 = param_3;
  param_1[1] = lVar3;
  *(undefined1 *)(param_1 + 2) = uVar4;
  param_1[3] = (long)puVar6;
  *(char *)(param_1 + 4) = cVar7;
  return;
}

