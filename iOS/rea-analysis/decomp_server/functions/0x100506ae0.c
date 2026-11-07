// rea decompile_all
// name: FUN_100506ae0
// address: 0x100506ae0
// body: available
// range: 0x100506ae0-0x100506e83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ulong FUN_100506ae0(ID param_1)

{
  code *pcVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  
  uVar6 = 1;
  pbVar2 = (byte *)0x1;
  _swift_slowAlloc(1,0xffffffffffffffff);
  puVar3 = (undefined8 *)_objc_msgSend(param_1,"read:maxLength:",pbVar2,1);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_10054df34();
    _swift_allocObject();
    *(undefined1 *)(puVar3 + 2) = 1;
    puVar3[3] = 0xd000000000000093;
    puVar3[4] = 0x80000001008bca00;
    puVar3[5] = &DAT_d000000000000010;
    puVar3[6] = 0x80000001008bc9b0;
    puVar3[7] = 0xd000000000000023;
    puVar3[8] = 0x80000001008bc9d0;
    puVar3[9] = 0xf6;
    puVar4 = puVar3;
    FUN_1004f9a1c();
    _swift_allocError(&DAT_1009d16f0,puVar4,0,0);
    *puVar4 = puVar3;
    goto LAB_100506df4;
  }
  if (puVar3 == (undefined8 *)0x1) {
    uVar6 = (ulong)*pbVar2 & 0x7f;
    if (-1 < (char)*pbVar2) goto LAB_100506b40;
    puVar3 = (undefined8 *)_objc_msgSend(param_1,"read:maxLength:",pbVar2,1);
    if (puVar3 == (undefined8 *)0x0) {
LAB_100506e24:
      puVar5 = (undefined1 *)0x0;
      FUN_1004faf70();
      _swift_allocError(&DAT_1009ce0a8,puVar5,0,0);
      *puVar5 = 1;
      goto LAB_100506df4;
    }
    if (puVar3 == (undefined8 *)0x1) {
      uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 7;
      if (-1 < (char)*pbVar2) goto LAB_100506b40;
      puVar3 = (undefined8 *)_objc_msgSend(param_1,"read:maxLength:",pbVar2,1);
      if (puVar3 == (undefined8 *)0x0) goto LAB_100506e24;
      if (puVar3 == (undefined8 *)0x1) {
        uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0xe;
        if (-1 < (char)*pbVar2) goto LAB_100506b40;
        puVar3 = (undefined8 *)_objc_msgSend(param_1,"read:maxLength:",pbVar2,1);
        if (puVar3 == (undefined8 *)0x0) goto LAB_100506e24;
        if (puVar3 == (undefined8 *)0x1) {
          uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0x15;
          if (-1 < (char)*pbVar2) goto LAB_100506b40;
          puVar3 = (undefined8 *)_objc_msgSend(param_1,"read:maxLength:",pbVar2,1);
          if (puVar3 == (undefined8 *)0x0) goto LAB_100506e24;
          if (puVar3 == (undefined8 *)0x1) {
            uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0x1c;
            if (-1 < (char)*pbVar2) goto LAB_100506b40;
            puVar3 = (undefined8 *)_objc_msgSend(param_1,"read:maxLength:",pbVar2,1);
            if (puVar3 == (undefined8 *)0x0) goto LAB_100506e24;
            if (puVar3 == (undefined8 *)0x1) {
              uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0x23;
              if (-1 < (char)*pbVar2) goto LAB_100506b40;
              puVar3 = (undefined8 *)_objc_msgSend(param_1,"read:maxLength:",pbVar2,1);
              if (puVar3 == (undefined8 *)0x0) goto LAB_100506e24;
              if (puVar3 == (undefined8 *)0x1) {
                uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0x2a;
                if (-1 < (char)*pbVar2) goto LAB_100506b40;
                puVar3 = (undefined8 *)_objc_msgSend(param_1,"read:maxLength:",pbVar2,1);
                if (puVar3 == (undefined8 *)0x0) goto LAB_100506e24;
                if (puVar3 == (undefined8 *)0x1) {
                  uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0x31;
                  if (-1 < (char)*pbVar2) goto LAB_100506b40;
                  puVar3 = (undefined8 *)_objc_msgSend(param_1,"read:maxLength:",pbVar2,1);
                  if (puVar3 == (undefined8 *)0x0) goto LAB_100506e24;
                  if (puVar3 == (undefined8 *)0x1) {
                    uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0x38;
                    if (-1 < (char)*pbVar2) {
LAB_100506b40:
                      _swift_slowDealloc(pbVar2,0xffffffffffffffff,0xffffffffffffffff);
                      return uVar6;
                    }
                    puVar3 = (undefined8 *)_objc_msgSend(param_1,"read:maxLength:",pbVar2,1);
                    if (puVar3 == (undefined8 *)0x0) goto LAB_100506e24;
                    if (puVar3 == (undefined8 *)0x1) {
                      if ((char)*pbVar2 < '\0') {
                        FUN_100506290();
                        _swift_allocError(&DAT_1009cdf18,puVar3,0,0);
                        *(undefined1 *)puVar3 = 3;
                        goto LAB_100506df4;
                      }
                      uVar6 = uVar6 | (ulong)*pbVar2 << 0x3f;
                      goto LAB_100506b40;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (puVar3 != (undefined8 *)0xffffffffffffffff) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100506e54);
    (*pcVar1)();
  }
  puVar5 = (undefined1 *)_objc_msgSend(param_1,"streamError");
  if (puVar5 == (undefined1 *)0x0) {
    FUN_1004faf70();
    _swift_allocError(&DAT_1009ce0a8,puVar5,0,0);
    *puVar5 = 0;
  }
LAB_100506df4:
  _swift_willThrow();
  _swift_slowDealloc(pbVar2,0xffffffffffffffff,0xffffffffffffffff);
  return uVar6;
}

