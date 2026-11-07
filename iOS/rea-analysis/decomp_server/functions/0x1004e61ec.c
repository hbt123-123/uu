// rea decompile_all
// name: FUN_1004e61ec
// address: 0x1004e61ec
// body: available
// range: 0x1004e61ec-0x1004e6877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1004e61ec(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_390 [24];
  undefined1 auStack_378 [24];
  undefined1 auStack_360 [24];
  undefined1 auStack_348 [24];
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [24];
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  lVar4 = *(long *)(param_1 + 0x10);
  _swift_beginAccess(param_2 + 0x10,auStack_60,0,0);
  lVar3 = *(long *)(param_2 + 0x10);
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (lVar3 < 2) {
      if (lVar3 == 0) {
        if (lVar4 != 0) {
          return false;
        }
      }
      else if (lVar4 != 1) {
        return false;
      }
    }
    else if (lVar3 == 2) {
      if (lVar4 != 2) {
        return false;
      }
    }
    else if (lVar3 == 3) {
      if (lVar4 != 3) {
        return false;
      }
    }
    else if (lVar4 != 4) {
      return false;
    }
  }
  else if (lVar4 != lVar3) {
    return false;
  }
  _swift_beginAccess(param_1 + 0x20,auStack_78,0,0);
  lVar4 = *(long *)(param_1 + 0x20);
  _swift_beginAccess(param_2 + 0x20,auStack_90,0,0);
  lVar3 = *(long *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (lVar3 < 3) {
      if (lVar3 == 0) {
        if (lVar4 != 0) {
          return false;
        }
      }
      else if (lVar3 == 1) {
        if (lVar4 != 1) {
          return false;
        }
      }
      else if (lVar4 != 2) {
        return false;
      }
    }
    else if (lVar3 < 5) {
      if (lVar3 == 3) {
        if (lVar4 != 3) {
          return false;
        }
      }
      else if (lVar4 != 4) {
        return false;
      }
    }
    else if (lVar3 == 5) {
      if (lVar4 != 5) {
        return false;
      }
    }
    else if (lVar4 != 6) {
      return false;
    }
  }
  else if (lVar4 != lVar3) {
    return false;
  }
  _swift_beginAccess(param_1 + 0x29,auStack_a8,0,0);
  cVar2 = *(char *)(param_1 + 0x29);
  _swift_beginAccess(param_2 + 0x29,auStack_c0,0,0);
  if (cVar2 == *(char *)(param_2 + 0x29)) {
    _swift_beginAccess(param_1 + 0x2c,auStack_d8,0,0);
    iVar1 = *(int *)(param_1 + 0x2c);
    _swift_beginAccess(param_2 + 0x2c,auStack_f0,0,0);
    if (iVar1 == *(int *)(param_2 + 0x2c)) {
      _swift_beginAccess(param_1 + 0x30,auStack_108,0,0);
      iVar1 = *(int *)(param_1 + 0x30);
      _swift_beginAccess(param_2 + 0x30,auStack_120,0,0);
      if (iVar1 == *(int *)(param_2 + 0x30)) {
        _swift_beginAccess(param_1 + 0x34,auStack_138,0,0);
        iVar1 = *(int *)(param_1 + 0x34);
        _swift_beginAccess(param_2 + 0x34,auStack_150,0,0);
        if (iVar1 == *(int *)(param_2 + 0x34)) {
          _swift_beginAccess(param_1 + 0x38,auStack_168,0,0);
          lVar4 = *(long *)(param_1 + 0x38);
          _swift_beginAccess(param_2 + 0x38,auStack_180,0,0);
          lVar3 = *(long *)(param_2 + 0x38);
          if (*(char *)(param_2 + 0x40) == '\x01') {
            if (lVar3 < 2) {
              if (lVar3 == 0) {
                if (lVar4 != 0) {
                  return false;
                }
              }
              else if (lVar4 != 1) {
                return false;
              }
            }
            else if (lVar3 == 2) {
              if (lVar4 != 2) {
                return false;
              }
            }
            else if (lVar3 == 3) {
              if (lVar4 != 3) {
                return false;
              }
            }
            else if (lVar4 != 4) {
              return false;
            }
          }
          else if (lVar4 != lVar3) {
            return false;
          }
          _swift_beginAccess(param_1 + 0x44,auStack_198,0,0);
          iVar1 = *(int *)(param_1 + 0x44);
          _swift_beginAccess(param_2 + 0x44,auStack_1b0,0,0);
          if (iVar1 == *(int *)(param_2 + 0x44)) {
            _swift_beginAccess(param_1 + 0x48,auStack_1c8,0,0);
            iVar1 = *(int *)(param_1 + 0x48);
            _swift_beginAccess(param_2 + 0x48,auStack_1e0,0,0);
            if (iVar1 == *(int *)(param_2 + 0x48)) {
              _swift_beginAccess(param_1 + 0x50,auStack_1f8,0,0);
              lVar4 = *(long *)(param_1 + 0x50);
              _swift_beginAccess(param_2 + 0x50,auStack_210,0,0);
              lVar3 = *(long *)(param_2 + 0x50);
              if (*(char *)(param_2 + 0x58) == '\x01') {
                if (lVar3 < 2) {
                  if (lVar3 == 0) {
                    if (lVar4 != 0) {
                      return false;
                    }
                  }
                  else if (lVar4 != 1) {
                    return false;
                  }
                }
                else if (lVar3 == 2) {
                  if (lVar4 != 2) {
                    return false;
                  }
                }
                else if (lVar3 == 3) {
                  if (lVar4 != 3) {
                    return false;
                  }
                }
                else if (lVar4 != 4) {
                  return false;
                }
              }
              else if (lVar4 != lVar3) {
                return false;
              }
              _swift_beginAccess(param_1 + 0x59,auStack_228,0,0);
              cVar2 = *(char *)(param_1 + 0x59);
              _swift_beginAccess(param_2 + 0x59,auStack_240,0,0);
              if (cVar2 == *(char *)(param_2 + 0x59)) {
                _swift_beginAccess(param_1 + 0x60,auStack_258,0,0);
                lVar4 = *(long *)(param_1 + 0x60);
                _swift_beginAccess(param_2 + 0x60,auStack_270,0,0);
                lVar3 = *(long *)(param_2 + 0x60);
                if (*(char *)(param_2 + 0x68) == '\x01') {
                  if (lVar3 < 3) {
                    if (lVar3 == 0) {
                      if (lVar4 != 0) {
                        return false;
                      }
                    }
                    else if (lVar3 == 1) {
                      if (lVar4 != 1) {
                        return false;
                      }
                    }
                    else if (lVar4 != 2) {
                      return false;
                    }
                  }
                  else if (lVar3 < 5) {
                    if (lVar3 == 3) {
                      if (lVar4 != 3) {
                        return false;
                      }
                    }
                    else if (lVar4 != 4) {
                      return false;
                    }
                  }
                  else if (lVar3 == 5) {
                    if (lVar4 != 5) {
                      return false;
                    }
                  }
                  else if (lVar4 != 6) {
                    return false;
                  }
                }
                else if (lVar4 != lVar3) {
                  return false;
                }
                _swift_beginAccess(param_1 + 0x70,auStack_288,0,0);
                lVar4 = *(long *)(param_1 + 0x70);
                _swift_beginAccess(param_2 + 0x70,auStack_2a0,0,0);
                lVar3 = *(long *)(param_2 + 0x70);
                if (*(char *)(param_2 + 0x78) == '\x01') {
                  if (lVar3 == 0) {
                    if (lVar4 != 0) {
                      return false;
                    }
                  }
                  else if (lVar3 == 1) {
                    if (lVar4 != 1) {
                      return false;
                    }
                  }
                  else if (lVar4 != 2) {
                    return false;
                  }
                }
                else if (lVar4 != lVar3) {
                  return false;
                }
                _swift_beginAccess(param_1 + 0x7c,auStack_2b8,0,0);
                iVar1 = *(int *)(param_1 + 0x7c);
                _swift_beginAccess(param_2 + 0x7c,auStack_2d0,0,0);
                if (iVar1 == *(int *)(param_2 + 0x7c)) {
                  _swift_beginAccess(param_1 + 0x80,auStack_2e8,0,0);
                  iVar1 = *(int *)(param_1 + 0x80);
                  _swift_beginAccess(param_2 + 0x80,auStack_300,0,0);
                  if (iVar1 == *(int *)(param_2 + 0x80)) {
                    _swift_beginAccess(param_1 + 0x84,auStack_318,0,0);
                    iVar1 = *(int *)(param_1 + 0x84);
                    _swift_beginAccess(param_2 + 0x84,auStack_330,0,0);
                    if (iVar1 == *(int *)(param_2 + 0x84)) {
                      _swift_beginAccess(param_1 + 0x88,auStack_348,0,0);
                      iVar1 = *(int *)(param_1 + 0x88);
                      _swift_beginAccess(param_2 + 0x88,auStack_360,0,0);
                      if (iVar1 == *(int *)(param_2 + 0x88)) {
                        _swift_beginAccess(param_1 + 0x8c,auStack_378,0,0);
                        iVar1 = *(int *)(param_1 + 0x8c);
                        _swift_beginAccess(param_2 + 0x8c,auStack_390,0,0);
                        return iVar1 == *(int *)(param_2 + 0x8c);
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
  }
  return false;
}

